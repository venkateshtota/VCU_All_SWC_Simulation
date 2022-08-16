#include "Os.h"
#include "EcuM.h"

extern void TargetStartCounter(void);

OS_MAIN()
{
    TargetStartCounter();

    EcuM_Init();
}

/*TASK(OsTask_Startup)
{
    EcuM_StartupTwo();

    //BswM_MainFunction();

    TerminateTask();
}*/

ISR(OsTickIsr)
{
    IncrementCounter(Rte_TickCounter);
}
