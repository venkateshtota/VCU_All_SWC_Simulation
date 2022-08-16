// %= file_banner($0) %>
#ifndef CAN_HWPROVIDERTYPES_H_
#define CAN_HWPROVIDERTYPES_H_

/*******************************************************************************
 *                             Include Files.
 *******************************************************************************/
#include <limits.h>

/*******************************************************************************
 *                         Macros
 ******************************************************************************/
/* Extended bit MSB, FD bit MSB-1 */
#define CAN_EXTENDED_ID_BIT                (( 1U << ((CHAR_BIT * (uint8)sizeof (Can_IdType))-1U)))
#define CAN_CANONICAL_ID_IS_STANDARD(_id)  ((((Can_IdType) (_id)) & CAN_EXTENDED_ID_BIT) == 0)
#define CAN_CANONICAL_ID_IS_EXTENDED(_id)  ((((Can_IdType) (_id)) & CAN_EXTENDED_ID_BIT) != 0)
#define CAN_MAX_FRAME_LENGTH               (64U)
#define CAN_ID_FD_BIT                      (( 1U << ((CHAR_BIT * (uint8)sizeof (Can_IdType))-2U)))
#define CAN_ID_FD_BIT_SET(_id)             ((((Can_IdType) (_id)) & CAN_ID_FD_BIT) != 0)
#define CAN_PDUL_MASK                      (~(CAN_EXTENDED_ID_BIT | CAN_ID_FD_BIT))

/*******************************************************************************
 *                         Types
 ******************************************************************************/

typedef enum {
  CAN_HWP_RXTYPE_BASIC,
  CAN_HWP_RXTYPE_FULL
} Can_Hwp_CanRxType;

typedef enum {
  CAN_HWP_IDTYPE_STANDARD,
  CAN_HWP_IDTYPE_EXTENDED,
  CAN_HWP_IDTYPE_MIXED
} Can_Hwp_CanIdType;

typedef enum {
  CAN_HWP_EVENT_RUNNING,
  CAN_HWP_EVENT_STOPPED,
  CAN_HWP_EVENT_SLEEPING,
  CAN_HWP_EVENT_TX_CANCELLED,
  CAN_HWP_EVENT_TX_COMPLETED,
  CAN_HWP_EVENT_RX,
  CAN_HWP_EVENT_DATALOST,
  CAN_HWP_EVENT_WAKEUP,
  CAN_HWP_EVENT_BUSOFF
} Can_Hwp_Event;

/* Description of a receive hardware object. */
typedef struct {
  Can_HwHandleType  handle;        /* Handle of the receive hardware object. */
  Can_Hwp_CanRxType rxType;        /* Receive type - FULL (i.e. exact ID match) or BASIC (filtered ID match). */
  Can_Hwp_CanIdType idType;        /* ID type to receive - standard, extended or mixed. */
  uint32            rxId;          /* Cannonical frame ID to receive. */
  uint32            rxFilterMask;  /* Filter mask for BASIC recevie type. */
} Can_Hwp_RxHwObject;

/* Description of a transmit hardware object. */
typedef struct {
  Can_HwHandleType  handle;        /* Handle of the transmit hardware object. */
  uint8 fdPaddingValue; /* [$CAN 1203] Specifies the value which is used to pad unspecified data in CAN FD frames > 8 bytes for transmission. */
  
} Can_Hwp_TxHwObject;

typedef struct {
  boolean                   txCancelLowerPriorityEnabled;  /* true if cancellation of lower priority transmit */
                                                           /* frames is enabled. */
  boolean                   txCancelEqualPriorityEnabled;  /* true if cancellation of equal priority transmit */
                                                           /* frames is enabled. */
  const Can_Hwp_RxHwObject* rxHwObjects;
  uint32                    numRxHwObjects;
  const Can_Hwp_TxHwObject* txHwObjects;
  uint32                    numTxHwObjects;
} Can_Hwp_ChannelConfig;

  /* Information used to configure the Fd baudrate of a channel. */
typedef struct {  
  uint16 baudrate; /* FD Baudrate in Kbps. */
  uint8  propagationDelay; /* Propagation delay in time quanta. */
  uint8  phaseSegment1;     /* Phase segment 1 in time quanta. */
  uint8  phaseSegment2;     /* Phase segment 2 in time quanta. */
  uint8  syncJumpWidth; /* Synchronization jump width for the controller in time quanta. */  
  uint16 trcvDelayCompensationOffset; /* Specifies the Transceiver Delay Compensation Offset in ns */
  boolean txBitRateSwitch; /* Specifies if the bit rate switching shall be used for transmissions. */  
} Can_HwpFdbaudrateConfig;
   
  
/* Information used to configure the baudrate of a channel. */
typedef struct {
  uint16 baudrate;           /* Baudrate in Kbps. */
  uint8  propagationDelay;   /* Propagation delay in time quanta. */
  uint8  phaseSegment1;      /* Phase segment 1 in time quanta. */
  uint8  phaseSegment2;      /* Phase segment 2 in time quanta. */
  uint8  syncJumpWidth;      /* Synchronization jump width for the controller in time quanta. */
  Can_HwpFdbaudrateConfig* fdBaudrateConfig;    
     
} Can_Hwp_BaudrateConfig;

/* Description of a CAN frame. */
typedef struct {
  boolean    injected;                    /* true if the frame been injected by an action. */
  boolean    txConfirm;                   /* true if the CAN driver call CanIf_TxConfirmation or */
                                          /* CanIf_CancelTxConfirmation for this frame? */
  PduIdType  swPduHandle;                 /* CanIf's transmit identifier. */
  Can_IdType id;                          /* The frame identifier in canonical form. */
  uint8      length;                      /* The number of bytes of data. */
  uint8      data[CAN_MAX_FRAME_LENGTH];  /* The data. */
} Can_Hwp_Frame;
  
/* Upcall function used a channel object to raise events in the CAN driver */
typedef void (*Can_Hwp_UpCall)(uint32 context, Can_Hwp_Event event, Can_HwHandleType handle, Can_Hwp_Frame* frame);


#endif /* CAN_HWPROVIDERTYPES_H_ */ 

