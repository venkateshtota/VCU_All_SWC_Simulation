/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "TqSplt"
   ARXML schema: "4.2"
   File generated on: "30-Jun-2022 08:17:03"  */

#define MEMMAP_ERROR

/* START_SEC Symbols */
#ifdef TqSplt_START_SEC_QmCode
#undef TqSplt_START_SEC_QmCode
#undef MEMMAP_ERROR
#elif defined( TqSplt_START_SEC_QmDataOffline16bit)
#undef TqSplt_START_SEC_QmDataOffline16bit
#undef MEMMAP_ERROR
#elif defined( TqSplt_START_SEC_QmDataOffline32bit)
#undef TqSplt_START_SEC_QmDataOffline32bit
#undef MEMMAP_ERROR
#elif defined( TqSplt_START_SEC_QmDataOffline8bit)
#undef TqSplt_START_SEC_QmDataOffline8bit
#undef MEMMAP_ERROR
#elif defined( TqSplt_START_SEC_QmDataOnline16bit)
#undef TqSplt_START_SEC_QmDataOnline16bit
#undef MEMMAP_ERROR
#elif defined( TqSplt_START_SEC_QmDataOnline32bit)
#undef TqSplt_START_SEC_QmDataOnline32bit
#undef MEMMAP_ERROR
#elif defined( TqSplt_START_SEC_QmDataOnline8bit)
#undef TqSplt_START_SEC_QmDataOnline8bit
#undef MEMMAP_ERROR
#elif defined( TqSplt_START_SEC_QmRamSlow16bitCleared)
#undef TqSplt_START_SEC_QmRamSlow16bitCleared
#undef MEMMAP_ERROR
#elif defined( TqSplt_START_SEC_QmRamSlow32bitCleared)
#undef TqSplt_START_SEC_QmRamSlow32bitCleared
#undef MEMMAP_ERROR
#elif defined( TqSplt_START_SEC_QmRamSlow8bitCleared)
#undef TqSplt_START_SEC_QmRamSlow8bitCleared
#undef MEMMAP_ERROR
#endif

/* STOP_SEC symbols */
#ifdef TqSplt_STOP_SEC_QmCode
#undef TqSplt_STOP_SEC_QmCode
#undef MEMMAP_ERROR
#elif defined( TqSplt_STOP_SEC_QmDataOffline16bit)
#undef TqSplt_STOP_SEC_QmDataOffline16bit
#undef MEMMAP_ERROR
#elif defined( TqSplt_STOP_SEC_QmDataOffline32bit)
#undef TqSplt_STOP_SEC_QmDataOffline32bit
#undef MEMMAP_ERROR
#elif defined( TqSplt_STOP_SEC_QmDataOffline8bit)
#undef TqSplt_STOP_SEC_QmDataOffline8bit
#undef MEMMAP_ERROR
#elif defined( TqSplt_STOP_SEC_QmDataOnline16bit)
#undef TqSplt_STOP_SEC_QmDataOnline16bit
#undef MEMMAP_ERROR
#elif defined( TqSplt_STOP_SEC_QmDataOnline32bit)
#undef TqSplt_STOP_SEC_QmDataOnline32bit
#undef MEMMAP_ERROR
#elif defined( TqSplt_STOP_SEC_QmDataOnline8bit)
#undef TqSplt_STOP_SEC_QmDataOnline8bit
#undef MEMMAP_ERROR
#elif defined( TqSplt_STOP_SEC_QmRamSlow16bitCleared)
#undef TqSplt_STOP_SEC_QmRamSlow16bitCleared
#undef MEMMAP_ERROR
#elif defined( TqSplt_STOP_SEC_QmRamSlow32bitCleared)
#undef TqSplt_STOP_SEC_QmRamSlow32bitCleared
#undef MEMMAP_ERROR
#elif defined( TqSplt_STOP_SEC_QmRamSlow8bitCleared)
#undef TqSplt_STOP_SEC_QmRamSlow8bitCleared
#undef MEMMAP_ERROR

/* Error out if none of the expected Memory Section keywords are defined */
#ifdef MEMMAP_ERROR
#error "TqSplt_MemMap.h wrong pragma command"
#endif
#endif
