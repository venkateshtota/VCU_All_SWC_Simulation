/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "DrvrItp"
   ARXML schema: "4.3"
   File generated on: "07-Jun-2022 13:41:08"  */

#define MEMMAP_ERROR

/* START_SEC Symbols */
#ifdef DrvrItp_START_SEC_QmCode
#undef DrvrItp_START_SEC_QmCode
#undef MEMMAP_ERROR
#elif defined( DrvrItp_START_SEC_QmDataOffline16bit)
#undef DrvrItp_START_SEC_QmDataOffline16bit
#undef MEMMAP_ERROR
#elif defined( DrvrItp_START_SEC_QmDataOffline32bit)
#undef DrvrItp_START_SEC_QmDataOffline32bit
#undef MEMMAP_ERROR
#elif defined( DrvrItp_START_SEC_QmDataOffline8bit)
#undef DrvrItp_START_SEC_QmDataOffline8bit
#undef MEMMAP_ERROR
#elif defined( DrvrItp_START_SEC_QmDataOnline16bit)
#undef DrvrItp_START_SEC_QmDataOnline16bit
#undef MEMMAP_ERROR
#elif defined( DrvrItp_START_SEC_QmDataOnline32bit)
#undef DrvrItp_START_SEC_QmDataOnline32bit
#undef MEMMAP_ERROR
#elif defined( DrvrItp_START_SEC_QmDataOnline8bit)
#undef DrvrItp_START_SEC_QmDataOnline8bit
#undef MEMMAP_ERROR
#elif defined( DrvrItp_START_SEC_QmRamSlow16bitCleared)
#undef DrvrItp_START_SEC_QmRamSlow16bitCleared
#undef MEMMAP_ERROR
#elif defined( DrvrItp_START_SEC_QmRamSlow32bitCleared)
#undef DrvrItp_START_SEC_QmRamSlow32bitCleared
#undef MEMMAP_ERROR
#elif defined( DrvrItp_START_SEC_QmRamSlow8bitCleared)
#undef DrvrItp_START_SEC_QmRamSlow8bitCleared
#undef MEMMAP_ERROR
#endif

/* STOP_SEC symbols */
#ifdef DrvrItp_STOP_SEC_QmCode
#undef DrvrItp_STOP_SEC_QmCode
#undef MEMMAP_ERROR
#elif defined( DrvrItp_STOP_SEC_QmDataOffline16bit)
#undef DrvrItp_STOP_SEC_QmDataOffline16bit
#undef MEMMAP_ERROR
#elif defined( DrvrItp_STOP_SEC_QmDataOffline32bit)
#undef DrvrItp_STOP_SEC_QmDataOffline32bit
#undef MEMMAP_ERROR
#elif defined( DrvrItp_STOP_SEC_QmDataOffline8bit)
#undef DrvrItp_STOP_SEC_QmDataOffline8bit
#undef MEMMAP_ERROR
#elif defined( DrvrItp_STOP_SEC_QmDataOnline16bit)
#undef DrvrItp_STOP_SEC_QmDataOnline16bit
#undef MEMMAP_ERROR
#elif defined( DrvrItp_STOP_SEC_QmDataOnline32bit)
#undef DrvrItp_STOP_SEC_QmDataOnline32bit
#undef MEMMAP_ERROR
#elif defined( DrvrItp_STOP_SEC_QmDataOnline8bit)
#undef DrvrItp_STOP_SEC_QmDataOnline8bit
#undef MEMMAP_ERROR
#elif defined( DrvrItp_STOP_SEC_QmRamSlow16bitCleared)
#undef DrvrItp_STOP_SEC_QmRamSlow16bitCleared
#undef MEMMAP_ERROR
#elif defined( DrvrItp_STOP_SEC_QmRamSlow32bitCleared)
#undef DrvrItp_STOP_SEC_QmRamSlow32bitCleared
#undef MEMMAP_ERROR
#elif defined( DrvrItp_STOP_SEC_QmRamSlow8bitCleared)
#undef DrvrItp_STOP_SEC_QmRamSlow8bitCleared
#undef MEMMAP_ERROR

/* Error out if none of the expected Memory Section keywords are defined */
#ifdef MEMMAP_ERROR
#error "DrvrItp_MemMap.h wrong pragma command"
#endif
#endif
