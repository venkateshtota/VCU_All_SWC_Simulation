

#ifndef CRC_H
#define CRC_H

/*
**********************************************************************************************************************
* Includes
**********************************************************************************************************************
*/
#include "Std_Types.h"             /* AUTOSAR standard type definitions */

#include "Crc_Cfg.h"               /* Configuration file */



/*
**********************************************************************************************************************
* Defines/Macros
**********************************************************************************************************************
*/


/*
**********************************************************************************************************************
* Type definitions
**********************************************************************************************************************
*/
/*  data type passed to hw calculation function, based on whether the data is 8bit or 16bit the following are used */
typedef union
{
    const uint8* b8Ptr;
    const uint16* b16Ptr;
}Crc_DataType; 
 

/*

**********************************************************************************************************************
* Variables
**********************************************************************************************************************
*/


/*
**********************************************************************************************************************
* Extern declarations
**********************************************************************************************************************
*/


/*
 **********************************************************************************************************************
 * Prototypes
 **********************************************************************************************************************
*/

#define CRC_START_SEC_CODE
#include "Crc_MemMap.h"

extern void Crc_GetVersionInfo(Std_VersionInfoType * const VersionInfo);
extern uint8 Crc_CalculateCRC8(const uint8* Crc_DataPtr, uint32 Crc_Length, uint8 Crc_StartValue8, boolean Crc_IsFirstCall);
extern uint8 Crc_CalculateCRC8H2F(const uint8* Crc_DataPtr, uint32 Crc_Length, uint8 Crc_StartValue8, boolean Crc_IsFirstCall);
extern uint16 Crc_CalculateCRC16(const uint8* Crc_DataPtr, uint32 Crc_Length, uint16 Crc_StartValue16, boolean Crc_IsFirstCall);
extern uint32 Crc_CalculateCRC32(const uint8* Crc_DataPtr, uint32 Crc_Length, uint32 Crc_StartValue32, boolean Crc_IsFirstCall);
extern uint32 Crc_CalculateCRC32P4(const uint8* Crc_DataPtr, uint32 Crc_Length, uint32 Crc_StartValue32, boolean Crc_IsFirstCall);
extern uint64 Crc_CalculateCRC64(const uint8* Crc_DataPtr, uint32 Crc_Length, uint64 Crc_StartValue64, boolean Crc_IsFirstCall);

#define CRC_STOP_SEC_CODE
#include "Crc_MemMap.h"

#endif /* CRC_H */


