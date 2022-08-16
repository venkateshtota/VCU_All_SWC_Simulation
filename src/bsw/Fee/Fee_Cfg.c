

#include "Fee.h"
#include "Fee_Cfg.h"
#include "Fee_Prv.h"



/* Properties of flash sectors */
#define FEE_START_SEC_CONST_UNSPECIFIED
#include "Fee_MemMap.h"
#if (defined(FEE_CFG_FEE1_ENABLED) && (TRUE == FEE_CFG_FEE1_ENABLED))
const Fee_FlashProp_tst Fee_FlashProp_st[FEE_NUM_FLASH_BANKS_AVAILABLE] = {
#else
const Fee_Rb_FlashProp_tst Fee_Rb_FlashProp_st[FEE_NUM_FLASH_BANKS_AVAILABLE] = {
#endif
    { FEE_PHYS_SEC_START0, FEE_PHYS_SEC_END0, FEE_LOG_SEC_START0, FEE_LOG_SEC_END0 }, /* sector 0 */
    { FEE_PHYS_SEC_START1, FEE_PHYS_SEC_END1, FEE_LOG_SEC_START1, FEE_LOG_SEC_END1 }, /* sector 1 */
    { FEE_PHYS_SEC_START2, FEE_PHYS_SEC_END2, FEE_LOG_SEC_START2, FEE_LOG_SEC_END2 }, /* sector 2 */
    { FEE_PHYS_SEC_START3, FEE_PHYS_SEC_END3, FEE_LOG_SEC_START3, FEE_LOG_SEC_END3 }, /* sector 3 */
    { FEE_PHYS_SEC_START4, FEE_PHYS_SEC_END4, FEE_LOG_SEC_START4, FEE_LOG_SEC_END4 }, /* sector 4 */
    { FEE_PHYS_SEC_START5, FEE_PHYS_SEC_END5, FEE_LOG_SEC_START5, FEE_LOG_SEC_END5 }, /* sector 5 */
};
#define FEE_STOP_SEC_CONST_UNSPECIFIED
#include "Fee_MemMap.h"


#if (FEE_RB_USE_ROM_BLOCKTABLE == TRUE)
#define FEE_START_SEC_CONST_UNSPECIFIED
#include "Fee_MemMap.h"
#if (defined(FEE_CFG_FEE1_ENABLED) && (TRUE == FEE_CFG_FEE1_ENABLED))
const Fee_BlockPropertiesType_tst Fee_BlockProperties_st[FEE_NUM_BLOCKS] = {
#else
const Fee_Rb_BlockPropertiesType_tst Fee_Rb_BlockProperties_st[FEE_NUM_BLOCKS] = {
#endif
#else
#define FEE_START_SEC_VAR_INIT_UNSPECIFIED
#include "Fee_MemMap.h"
#if (defined(FEE_CFG_FEE1_ENABLED) && (TRUE == FEE_CFG_FEE1_ENABLED))
Fee_BlockPropertiesType_tst Fee_BlockProperties_st[FEE_NUM_BLOCKS] = {
#else
Fee_Rb_BlockPropertiesType_tst Fee_Rb_BlockProperties_st[FEE_NUM_BLOCKS] = {
#endif
#endif

             /* FeeRbBlockPersistentId,  StatusFlags,  BlkLength ,  FeeRbCallbackEnd    ,  FeeRbCallbackError  */
     /*   0 */{         0xA6CA         ,   0x0100   ,   0x0001   ,NULL_PTR              ,NULL_PTR               } /* NvM_NativeBlock_2                        */,
     /*   1 */{         0xF2F7         ,   0x0100   ,   0x0004   ,NULL_PTR              ,NULL_PTR               } /* ECUM_CFG_NVM_BLOCK                       */,
};

#if (FEE_RB_USE_ROM_BLOCKTABLE == TRUE)
#define FEE_STOP_SEC_CONST_UNSPECIFIED
#include "Fee_MemMap.h"
#else
#define FEE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Fee_MemMap.h"
#endif

#define FEE_START_SEC_CONST_UNSPECIFIED
#include "Fee_MemMap.h"
/* Linked functions of the Fee */
const Fee_LinkedFunctions_tst Fee_LinkedFunctions_cst = 
{
    NULL_PTR
};
#define FEE_STOP_SEC_CONST_UNSPECIFIED
#include "Fee_MemMap.h"



