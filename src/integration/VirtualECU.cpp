//
// Basic VECU for running RTA-OS example application
//
// Copyright ETAS GmbH 2021
#include "vrtaCore.h"
#include "vrtaSampleDevices.h"
#include "vrtaLoggerDevice.h"
#undef CONST
#undef ApplicationType
extern "C" {
  #include "Platform_Types.h"
}; // extern "C"

//---------------------------------------------------------------------------
// Create a clock that ticks every X ms.
vrtaClock MillisecondTick((vrtaTextPtr)"MillisecondTick", 1);

//---------------------------------------------------------------------------
// Periodic Interrupt : Create an up counter attached to the system tick.
vrtaUpCounter PeriodicCounter((vrtaTextPtr)"PeriodicCounter", MillisecondTick);

//---------------------------------------------------------------------------
// Create a comparator that generates an interrupt when it reaches the
// low value of the counter - allows interrupts at tick rate.
vrtaCompare PeriodicInterrupt((vrtaTextPtr)"PeriodicInt", PeriodicCounter, 0, 0x1);

//---------------------------------------------------------------------------
// Millisecond Timer : Create an endless up counter attached to the system tick.
vrtaUpCounter MillisecondClock((vrtaTextPtr)"MillisecondClock", MillisecondTick);

//---------------------------------------------------------------------------
// Called from vrtaCore automatically
void InitializeDevices(void) {
    MillisecondClock.SetMin(0);
    MillisecondClock.SetMax(65535U);
    PeriodicCounter.SetMin(0);
    PeriodicCounter.SetMax(0);
}

extern "C" {

    void TargetStartCounter(void) {
        MillisecondTick.Start();
        MillisecondClock.Start();
        PeriodicCounter.Stop();
        PeriodicCounter.SetVal(0);
        PeriodicCounter.Start();

        vrtaSystemClock_FavourFixedInterval(FALSE);
    }
};

//---------------------------------------------------------------------------
// Called by StartupHook() to unmask all interrupt sources.
extern "C" {

    void TargetEnableInterrupts(void) {
        vrtaAction action;

        action.devAction = ICU_ACTION_ID_Unmask;
        action.devActionLen = sizeof (action.devEmbeddedData.uVal);
        action.devActionData = NULL;

        for (unsigned i = 1; i <= 32; i++) {
            action.devEmbeddedData.uVal = i;
            action.devID = Os_ICUForInterruptVector[action.devEmbeddedData.uVal];
            vrtaSendAction(action.devID, &action);
        }
    }
};
