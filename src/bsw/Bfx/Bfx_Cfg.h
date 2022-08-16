

#ifndef BFX_CFG_H
#define BFX_CFG_H

/*
 **********************************************************************************************************************
 * GetVersionInfo
 **********************************************************************************************************************
 */

/* Availability and activity of GetVersionInfo function */
#define BFX_VERSIONINFOAPI           STD_OFF

/*
 **********************************************************************************************************************
 * Memory Configuration
 **********************************************************************************************************************
 */

/* Macro for code location           */
/* Do not change these macros        */
#define BFX_CFG_LOCATION_NORMAL      1
#define BFX_CFG_LOCATION_FAST        2
#define BFX_CFG_LOCATION_SLOW        3
#define BFX_CFG_LOCATION_INLINE      4

/*
 **********************************************************************************************************************
 * Switches for Optimizations 
 **********************************************************************************************************************
 */

/* Defines for optimization switches */
/* Do not change these macros        */
#define BFX_CFG_NOOPTIMIZATION       0
#define BFX_CFG_TCCOMMON             1
#define BFX_CFG_TC27XX               2
#define BFX_CFG_MPCCOMMON            3
#define BFX_CFG_MPCCUT2              4
#define BFX_CFG_ARMV8X32             5

/* Activation of specific optimization */
#define BFX_CFG_OPTIMIZATION          BFX_CFG_NOOPTIMIZATION

/*********************************************************************************************************************/

/* Modification of location of services                              */
/* values:     BFX_CFG_LOCATION_NORMAL                               */
/*                                 -  Location in normal flash       */
/*             BFX_CFG_LOCATION_FAST                                 */
/*                                 -  Location in fast flash         */
/*             BFX_CFG_LOCATION_SLOW                                 */
/*                                 -  Location in slow flash         */
/*             BFX_CFG_LOCATION_INLINE                               */
/*                                 -  Service is inlined             */

#define BFX_CFG_CLRBIT_U16U8_LOCATION                      BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_CLRBIT_U32U8_LOCATION                      BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_CLRBIT_U8U8_LOCATION                       BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_CLRBIT_U64U8_LOCATION                       BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_CLRBITMASK_U16U16_LOCATION                 BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_CLRBITMASK_U32U32_LOCATION                 BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_CLRBITMASK_U8U8_LOCATION                   BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_CLRBITMASK_U64U64_LOCATION                 BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_COPYBIT_U16U8U16U8_LOCATION                BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_COPYBIT_U32U8U32U8_LOCATION                BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_COPYBIT_U8U8U8U8_LOCATION                  BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_COPYBIT_U64U8U64U8_LOCATION                  BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_GETBIT_U16U8_U8_LOCATION                   BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_GETBIT_U32U8_U8_LOCATION                   BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_GETBIT_U8U8_U8_LOCATION                    BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_GETBIT_U64U8_U8_LOCATION                    BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_GETBITS_U16U8U8_U16_LOCATION               BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_GETBITS_U32U8U8_U32_LOCATION               BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_GETBITS_U8U8U8_U8_LOCATION                 BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_GETBITS_U64U8U8_U64_LOCATION                 BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_PUTBIT_U16U8U8_LOCATION                    BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_PUTBIT_U32U8U8_LOCATION                    BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_PUTBIT_U8U8U8_LOCATION                     BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_PUTBIT_U64U8U8_LOCATION                     BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_PUTBITS_U16U8U8U16_LOCATION                BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_PUTBITS_U32U8U8U32_LOCATION                BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_PUTBITS_U8U8U8U8_LOCATION                  BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_PUTBITS_U64U8U8U64_LOCATION                  BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_PUTBITSMASK_U16U16U16_LOCATION             BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_PUTBITSMASK_U32U32U32_LOCATION             BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_PUTBITSMASK_U8U8U8_LOCATION                BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_PUTBITSMASK_U64U64U64_LOCATION                BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_ROTBITLT_U16U8_LOCATION                    BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_ROTBITLT_U32U8_LOCATION                    BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_ROTBITLT_U8U8_LOCATION                     BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_ROTBITLT_U64U8_LOCATION                     BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_ROTBITRT_U16U8_LOCATION                    BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_ROTBITRT_U32U8_LOCATION                    BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_ROTBITRT_U8U8_LOCATION                     BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_ROTBITRT_U64U8_LOCATION                     BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SETBIT_U16U8_LOCATION                      BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SETBIT_U32U8_LOCATION                      BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SETBIT_U8U8_LOCATION                       BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SETBIT_U64U8_LOCATION                       BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SETBITMASK_U16U16_LOCATION                 BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SETBITMASK_U32U32_LOCATION                 BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SETBITMASK_U8U8_LOCATION                   BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SETBITMASK_U64U64_LOCATION                   BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SETBITS_U16U8U8U8_LOCATION                 BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SETBITS_U32U8U8U8_LOCATION                 BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SETBITS_U8U8U8U8_LOCATION                  BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SETBITS_U64U8U8U8_LOCATION                  BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SHIFTBITLT_U16U8_LOCATION                  BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SHIFTBITLT_U32U8_LOCATION                  BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SHIFTBITLT_U8U8_LOCATION                   BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SHIFTBITLT_U64U8_LOCATION                   BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SHIFTBITRT_U16U8_LOCATION                  BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SHIFTBITRT_U32U8_LOCATION                  BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SHIFTBITRT_U8U8_LOCATION                   BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_SHIFTBITRT_U64U8_LOCATION                   BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TOGGLEBITMASK_U16U16_LOCATION              BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TOGGLEBITMASK_U32U32_LOCATION              BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TOGGLEBITMASK_U8U8_LOCATION                BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TOGGLEBITMASK_U64U64_LOCATION                BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TOGGLEBITS_U16_LOCATION                    BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TOGGLEBITS_U32_LOCATION                    BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TOGGLEBITS_U8_LOCATION                     BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TOGGLEBITS_U64_LOCATION                     BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TSTBITLNMASK_U16U16_U8_LOCATION            BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TSTBITLNMASK_U32U32_U8_LOCATION            BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TSTBITLNMASK_U8U8_U8_LOCATION              BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TSTBITLNMASK_U64U64_U8_LOCATION              BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TSTBITMASK_U16U16_U8_LOCATION              BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TSTBITMASK_U32U32_U8_LOCATION              BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TSTBITMASK_U8U8_U8_LOCATION                BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TSTBITMASK_U64U64_U8_LOCATION                BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TSTPARITYEVEN_U16_U8_LOCATION              BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TSTPARITYEVEN_U32_U8_LOCATION              BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TSTPARITYEVEN_U8_U8_LOCATION               BFX_CFG_LOCATION_NORMAL
#define BFX_CFG_TSTPARITYEVEN_U64_U8_LOCATION               BFX_CFG_LOCATION_NORMAL

/*
 **********************************************************************************************************************
 * Implementation
 **********************************************************************************************************************
 */

 /* Patch to speed up the run of QAC tool */
#if (!defined(__QACDF__) || (defined(__QACDF__) && defined(SRVLIBS)))

/* Normal code section ***********************************************************************************************/

#define BFX_START_SEC_CODE
#include "Bfx_MemMap.h"
    extern void Bfx_ClrBit_u16u8(uint16* Data, uint8 BitPn);
    extern void Bfx_ClrBit_u32u8(uint32* Data, uint8 BitPn);
    extern void Bfx_ClrBit_u8u8(uint8* Data, uint8 BitPn);
    extern void Bfx_ClrBit_u64u8(Bfx_uint64* Data, uint8 BitPn);
    extern void Bfx_ClrBitMask_u16u16(uint16* Data, uint16 Mask);
    extern void Bfx_ClrBitMask_u32u32(uint32* Data, uint32 Mask);
    extern void Bfx_ClrBitMask_u8u8(uint8* Data, uint8 Mask);
    extern void Bfx_ClrBitMask_u64u64(Bfx_uint64* Data, Bfx_uint64 Mask);
    extern void Bfx_CopyBit_u16u8u16u8(uint16* DestinationData, uint8 DestinationPosition, uint16 SourceData, 
                                                                            uint8 SourcePosition);
    extern void Bfx_CopyBit_u32u8u32u8(uint32* DestinationData, uint8 DestinationPosition, uint32 SourceData, 
                                                                            uint8 SourcePosition);
    extern void Bfx_CopyBit_u8u8u8u8(uint8* DestinationData, uint8 DestinationPosition, uint8 SourceData, 
                                                                            uint8 SourcePosition);
    extern void Bfx_CopyBit_u64u8u64u8(Bfx_uint64* DestinationData, uint8 DestinationPosition, Bfx_uint64 SourceData, 
                                                                            uint8 SourcePosition);
    extern boolean Bfx_GetBit_u16u8_u8(uint16 Data, uint8 BitPn);
    extern boolean Bfx_GetBit_u32u8_u8(uint32 Data, uint8 BitPn);
    extern boolean Bfx_GetBit_u8u8_u8(uint8 Data, uint8 BitPn);
    extern boolean Bfx_GetBit_u64u8_u8(Bfx_uint64 Data, uint8 BitPn);
    extern uint16 Bfx_GetBits_u16u8u8_u16(uint16 Data, uint8 BitStartPn, uint8 BitLn);
    extern uint32 Bfx_GetBits_u32u8u8_u32(uint32 Data, uint8 BitStartPn, uint8 BitLn);
    extern uint8 Bfx_GetBits_u8u8u8_u8(uint8 Data, uint8 BitStartPn, uint8 BitLn);
    extern Bfx_uint64 Bfx_GetBits_u64u8u8_u64(Bfx_uint64 Data, uint8 BitStartPn, uint8 BitLn);
    extern void Bfx_PutBit_u16u8u8(uint16* Data, uint8 BitPn, boolean Status);
    extern void Bfx_PutBit_u32u8u8(uint32* Data, uint8 BitPn, boolean Status);
    extern void Bfx_PutBit_u8u8u8(uint8* Data, uint8 BitPn, boolean Status);
    extern void Bfx_PutBit_u64u8u8(Bfx_uint64* Data, uint8 BitPn, boolean Status);
    extern void Bfx_PutBits_u16u8u8u16(uint16* Data, uint8 BitStartPn, uint8 BitLn, uint16 Pattern);
    extern void Bfx_PutBits_u32u8u8u32(uint32* Data, uint8 BitStartPn, uint8 BitLn, uint32 Pattern);
    extern void Bfx_PutBits_u8u8u8u8(uint8* Data, uint8 BitStartPn, uint8 BitLn, uint8 Pattern);
    extern void Bfx_PutBits_u64u8u8u64(Bfx_uint64* Data, uint8 BitStartPn, uint8 BitLn, Bfx_uint64 Pattern);
    extern void Bfx_PutBitsMask_u16u16u16(uint16* Data, uint16 Pattern, uint16 Mask);
    extern void Bfx_PutBitsMask_u32u32u32(uint32* Data, uint32 Pattern, uint32 Mask);
    extern void Bfx_PutBitsMask_u8u8u8(uint8* Data, uint8 Pattern, uint8 Mask);
    extern void Bfx_PutBitsMask_u64u64u64(Bfx_uint64* Data, Bfx_uint64 Pattern, Bfx_uint64 Mask);
    extern void Bfx_RotBitLt_u16u8(uint16* Data, uint8 ShiftCnt);
    extern void Bfx_RotBitLt_u32u8(uint32* Data, uint8 ShiftCnt);
    extern void Bfx_RotBitLt_u8u8(uint8* Data, uint8 ShiftCnt);
    extern void Bfx_RotBitLt_u64u8(Bfx_uint64* Data, uint8 ShiftCnt);
    extern void Bfx_RotBitRt_u16u8(uint16* Data, uint8 ShiftCnt);
    extern void Bfx_RotBitRt_u32u8(uint32* Data, uint8 ShiftCnt);
    extern void Bfx_RotBitRt_u8u8(uint8* Data, uint8 ShiftCnt);
    extern void Bfx_RotBitRt_u64u8(Bfx_uint64* Data, uint8 ShiftCnt);
    extern void Bfx_SetBit_u16u8(uint16* Data, uint8 BitPn);
    extern void Bfx_SetBit_u32u8(uint32* Data, uint8 BitPn);
    extern void Bfx_SetBit_u8u8(uint8* Data, uint8 BitPn);
    extern void Bfx_SetBit_u64u8(Bfx_uint64* Data, uint8 BitPn);
    extern void Bfx_SetBitMask_u16u16(uint16* Data, uint16 Mask);
    extern void Bfx_SetBitMask_u32u32(uint32* Data, uint32 Mask);
    extern void Bfx_SetBitMask_u8u8(uint8* Data, uint8 Mask);
    extern void Bfx_SetBitMask_u64u64(Bfx_uint64* Data, Bfx_uint64 Mask);
    extern void Bfx_SetBits_u16u8u8u8(uint16* Data, uint8 BitStartPn, uint8 BitLn, uint8 Status);
    extern void Bfx_SetBits_u32u8u8u8(uint32* Data, uint8 BitStartPn, uint8 BitLn, uint8 Status);
    extern void Bfx_SetBits_u8u8u8u8(uint8* Data, uint8 BitStartPn, uint8 BitLn, uint8 Status);
    extern void Bfx_SetBits_u64u8u8u8(Bfx_uint64* Data, uint8 BitStartPn, uint8 BitLn, uint8 Status);
    extern void Bfx_ShiftBitLt_u16u8(uint16* Data, uint8 ShiftCnt);
    extern void Bfx_ShiftBitLt_u32u8(uint32* Data, uint8 ShiftCnt);
    extern void Bfx_ShiftBitLt_u8u8(uint8* Data, uint8 ShiftCnt);
    extern void Bfx_ShiftBitLt_u64u8(Bfx_uint64* Data, uint8 ShiftCnt);
    extern void Bfx_ShiftBitRt_u16u8(uint16* Data, uint8 ShiftCnt);
    extern void Bfx_ShiftBitRt_u32u8(uint32* Data, uint8 ShiftCnt);
    extern void Bfx_ShiftBitRt_u8u8(uint8* Data, uint8 ShiftCnt);
    extern void Bfx_ShiftBitRt_u64u8(Bfx_uint64* Data, uint8 ShiftCnt);
    extern void Bfx_ToggleBitMask_u16u16(uint16* Data, uint16 Mask);
    extern void Bfx_ToggleBitMask_u32u32(uint32* Data, uint32 Mask);
    extern void Bfx_ToggleBitMask_u8u8(uint8* Data, uint8 Mask);
    extern void Bfx_ToggleBitMask_u64u64(Bfx_uint64* Data, Bfx_uint64 Mask);
    extern void Bfx_ToggleBits_u16(uint16* Data);
    extern void Bfx_ToggleBits_u32(uint32* Data);
    extern void Bfx_ToggleBits_u8(uint8* Data);
    extern void Bfx_ToggleBits_u64(Bfx_uint64* Data);
    extern boolean Bfx_TstBitLnMask_u16u16_u8(uint16 Data, uint16 Mask);
    extern boolean Bfx_TstBitLnMask_u32u32_u8(uint32 Data, uint32 Mask);
    extern boolean Bfx_TstBitLnMask_u8u8_u8(uint8 Data, uint8 Mask);
    extern boolean Bfx_TstBitLnMask_u64u64_u8(Bfx_uint64 Data, Bfx_uint64 Mask);
    extern boolean Bfx_TstBitMask_u16u16_u8(uint16 Data, uint16 Mask);
    extern boolean Bfx_TstBitMask_u32u32_u8(uint32 Data, uint32 Mask);
    extern boolean Bfx_TstBitMask_u8u8_u8(uint8 Data, uint8 Mask);
    extern boolean Bfx_TstBitMask_u64u64_u8(Bfx_uint64 Data, Bfx_uint64 Mask);
    extern boolean Bfx_TstParityEven_u16_u8(uint16 Data);
    extern boolean Bfx_TstParityEven_u32_u8(uint32 Data);
    extern boolean Bfx_TstParityEven_u8_u8(uint8 Data);
    extern boolean Bfx_TstParityEven_u64_u8(Bfx_uint64 Data);
#define BFX_STOP_SEC_CODE
#include "Bfx_MemMap.h"

#else
    extern void Bfx_ClrBit_u16u8(uint16* Data, uint8 BitPn);
    extern void Bfx_ClrBit_u32u8(uint32* Data, uint8 BitPn);
    extern void Bfx_ClrBit_u8u8(uint8* Data, uint8 BitPn);
    extern void Bfx_ClrBit_u64u8(Bfx_uint64* Data, uint8 BitPn);
    extern void Bfx_ClrBitMask_u16u16(uint16* Data, uint16 Mask);
    extern void Bfx_ClrBitMask_u32u32(uint32* Data, uint32 Mask);
    extern void Bfx_ClrBitMask_u8u8(uint8* Data, uint8 Mask);
    extern void Bfx_ClrBitMask_u64u64(Bfx_uint64* Data, Bfx_uint64 Mask);
    extern void Bfx_CopyBit_u16u8u16u8(uint16* DestinationData, uint8 DestinationPosition, uint16 SourceData, 
                                                                        uint8 SourcePosition);
    extern void Bfx_CopyBit_u32u8u32u8(uint32* DestinationData, uint8 DestinationPosition, uint32 SourceData,
                                                                        uint8 SourcePosition);
    extern void Bfx_CopyBit_u8u8u8u8(uint8* DestinationData, uint8 DestinationPosition, uint8 SourceData,
                                                                        uint8 SourcePosition);
    extern void Bfx_CopyBit_u64u8u64u8(Bfx_uint64* DestinationData, uint8 DestinationPosition, Bfx_uint64 SourceData, 
                                                                        uint8 SourcePosition);
    extern boolean Bfx_GetBit_u16u8_u8(uint16 Data, uint8 BitPn);
    extern boolean Bfx_GetBit_u32u8_u8(uint32 Data, uint8 BitPn);
    extern boolean Bfx_GetBit_u8u8_u8(uint8 Data, uint8 BitPn);
    extern boolean Bfx_GetBit_u64u8_u8(Bfx_uint64 Data, uint8 BitPn);
    extern uint16 Bfx_GetBits_u16u8u8_u16(uint16 Data, uint8 BitStartPn, uint8 BitLn);
    extern uint32 Bfx_GetBits_u32u8u8_u32(uint32 Data, uint8 BitStartPn, uint8 BitLn);
    extern uint8 Bfx_GetBits_u8u8u8_u8(uint8 Data, uint8 BitStartPn, uint8 BitLn);
    extern Bfx_uint64 Bfx_GetBits_u64u8u8_u64(Bfx_uint64 Data, uint8 BitStartPn, uint8 BitLn);
    extern void Bfx_PutBit_u16u8u8(uint16* Data, uint8 BitPn, boolean Status);
    extern void Bfx_PutBit_u32u8u8(uint32* Data, uint8 BitPn, boolean Status);
    extern void Bfx_PutBit_u8u8u8(uint8* Data, uint8 BitPn, boolean Status);
    extern void Bfx_PutBit_u64u8u8(Bfx_uint64* Data, uint8 BitPn, boolean Status);
    extern void Bfx_PutBits_u16u8u8u16(uint16* Data, uint8 BitStartPn, uint8 BitLn, uint16 Pattern);
    extern void Bfx_PutBits_u32u8u8u32(uint32* Data, uint8 BitStartPn, uint8 BitLn, uint32 Pattern);
    extern void Bfx_PutBits_u8u8u8u8(uint8* Data, uint8 BitStartPn, uint8 BitLn, uint8 Pattern);
    extern void Bfx_PutBits_u64u8u8u64(Bfx_uint64* Data, uint8 BitStartPn, uint8 BitLn, Bfx_uint64 Pattern);
    extern void Bfx_PutBitsMask_u16u16u16(uint16* Data, uint16 Pattern, uint16 Mask);
    extern void Bfx_PutBitsMask_u32u32u32(uint32* Data, uint32 Pattern, uint32 Mask);
    extern void Bfx_PutBitsMask_u8u8u8(uint8* Data, uint8 Pattern, uint8 Mask);
    extern void Bfx_PutBitsMask_u64u64u64(Bfx_uint64* Data, Bfx_uint64 Pattern, Bfx_uint64 Mask);
    extern void Bfx_RotBitLt_u16u8(uint16* Data, uint8 ShiftCnt);
    extern void Bfx_RotBitLt_u32u8(uint32* Data, uint8 ShiftCnt);
    extern void Bfx_RotBitLt_u8u8(uint8* Data, uint8 ShiftCnt);
    extern void Bfx_RotBitLt_u64u8(Bfx_uint64* Data, uint8 ShiftCnt);
    extern void Bfx_RotBitRt_u16u8(uint16* Data, uint8 ShiftCnt);
    extern void Bfx_RotBitRt_u32u8(uint32* Data, uint8 ShiftCnt);
    extern void Bfx_RotBitRt_u8u8(uint8* Data, uint8 ShiftCnt);
    extern void Bfx_RotBitRt_u64u8(Bfx_uint64* Data, uint8 ShiftCnt);
    extern void Bfx_SetBit_u16u8(uint16* Data, uint8 BitPn);
    extern void Bfx_SetBit_u32u8(uint32* Data, uint8 BitPn);
    extern void Bfx_SetBit_u8u8(uint8* Data, uint8 BitPn);
    extern void Bfx_SetBit_u64u8(Bfx_uint64* Data, uint8 BitPn);
    extern void Bfx_SetBitMask_u16u16(uint16* Data, uint16 Mask);
    extern void Bfx_SetBitMask_u32u32(uint32* Data, uint32 Mask);
    extern void Bfx_SetBitMask_u8u8(uint8* Data, uint8 Mask);
    extern void Bfx_SetBitMask_u64u64(Bfx_uint64* Data, Bfx_uint64 Mask);
    extern void Bfx_SetBits_u16u8u8u8(uint16* Data, uint8 BitStartPn, uint8 BitLn, uint8 Status);
    extern void Bfx_SetBits_u32u8u8u8(uint32* Data, uint8 BitStartPn, uint8 BitLn, uint8 Status);
    extern void Bfx_SetBits_u8u8u8u8(uint8* Data, uint8 BitStartPn, uint8 BitLn, uint8 Status);
    extern void Bfx_SetBits_u64u8u8u8(Bfx_uint64* Data, uint8 BitStartPn, uint8 BitLn, uint8 Status);
    extern void Bfx_ShiftBitLt_u16u8(uint16* Data, uint8 ShiftCnt);
    extern void Bfx_ShiftBitLt_u32u8(uint32* Data, uint8 ShiftCnt);
    extern void Bfx_ShiftBitLt_u8u8(uint8* Data, uint8 ShiftCnt);
    extern void Bfx_ShiftBitLt_u64u8(Bfx_uint64* Data, uint8 ShiftCnt);
    extern void Bfx_ShiftBitRt_u16u8(uint16* Data, uint8 ShiftCnt);
    extern void Bfx_ShiftBitRt_u32u8(uint32* Data, uint8 ShiftCnt);
    extern void Bfx_ShiftBitRt_u8u8(uint8* Data, uint8 ShiftCnt);
    extern void Bfx_ShiftBitRt_u64u8(Bfx_uint64* Data, uint8 ShiftCnt);
    extern void Bfx_ToggleBitMask_u16u16(uint16* Data, uint16 Mask);
    extern void Bfx_ToggleBitMask_u32u32(uint32* Data, uint32 Mask);
    extern void Bfx_ToggleBitMask_u8u8(uint8* Data, uint8 Mask);
    extern void Bfx_ToggleBitMask_u64u64(Bfx_uint64* Data, Bfx_uint64 Mask);
    extern void Bfx_ToggleBits_u16(uint16* Data);
    extern void Bfx_ToggleBits_u32(uint32* Data);
    extern void Bfx_ToggleBits_u8(uint8* Data);
    extern void Bfx_ToggleBits_u64(Bfx_uint64* Data);
    extern boolean Bfx_TstBitLnMask_u16u16_u8(uint16 Data, uint16 Mask);
    extern boolean Bfx_TstBitLnMask_u32u32_u8(uint32 Data, uint32 Mask);
    extern boolean Bfx_TstBitLnMask_u8u8_u8(uint8 Data, uint8 Mask);
    extern boolean Bfx_TstBitLnMask_u64u64_u8(Bfx_uint64 Data, Bfx_uint64 Mask);
    extern boolean Bfx_TstBitMask_u16u16_u8(uint16 Data, uint16 Mask);
    extern boolean Bfx_TstBitMask_u32u32_u8(uint32 Data, uint32 Mask);
    extern boolean Bfx_TstBitMask_u8u8_u8(uint8 Data, uint8 Mask);
    extern boolean Bfx_TstBitMask_u64u64_u8(Bfx_uint64 Data, Bfx_uint64 Mask);
    extern boolean Bfx_TstParityEven_u16_u8(uint16 Data);
    extern boolean Bfx_TstParityEven_u32_u8(uint32 Data);
    extern boolean Bfx_TstParityEven_u8_u8(uint8 Data);
    extern boolean Bfx_TstParityEven_u64_u8(Bfx_uint64 Data);
#endif
/* BFX_CFG_H_ */
#endif
