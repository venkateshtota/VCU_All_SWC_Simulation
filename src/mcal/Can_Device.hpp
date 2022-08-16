/*******************************************************************************
 * Autogenerated by MCALgen for CAN V1.0.54.30643: Can_Device.hpp
 *******************************************************************************/
#ifndef CAN_DEVICE_HPP_
#define CAN_DEVICE_HPP_

typedef enum{
  CAN_STATE_UNINIT,
  CAN_STATE_STOPPED,
  CAN_STATE_STARTED,
  CAN_STATE_SLEEP,
}Can_EventState;

extern void Can_RaiseInterrupt(void);
extern void Can_ReportDETError(uint32 instanceId, uint32 apiId, uint32 errorId);
extern void Can_RaiseWriteEvent(int index, boolean source, uint8 result, Can_HwHandleType Hth, Can_Hwp_Frame* frame);
extern void Can_RaiseRxEvent(int index, Can_HwHandleType handle, Can_Hwp_Frame* frame);
extern void Can_RaiseTxEvent(int index, Can_HwHandleType handle, Can_Hwp_Frame* frame);
extern void Can_RaiseStateEvent(int index, Can_EventState state, const char* hardwarename);
extern void Can_RaiseCanState (Can_DriverStatus state);
extern void Can_RaiseErrorState(int index, vrtaUInt errorState);
#endif /* CAN_DEVICE_HPP_ */

#ifndef NULL_CPP_PTR
 #define NULL_CPP_PTR  (0)
#endif

