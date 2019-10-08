#ifndef REQUEST_CODE_H
#define REQUEST_CODE_H
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// UMSATS 2018-2020
//
// Repository:
//  UMSATS GitHub cdh-tsat5: Command and Data Handling (CDH) for TSAT5
//
// File Description:
//  Predefined task codes for well-defined tasks.
//
// History
// 2019-09-08 by Eric Kapilik
// - Created.
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// INCLUDES
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// DEFINITIONS AND MACROS
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// ENUMS AND ENUM TYPEDEFS
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
/*-------------------------------------------------------------------------*//**
  The request_code_t enumeration is used as the reqeust code parameter for
  the schedule_task() function in the scheduler.c module
  to specify what predefined requested action to take.
 */
typedef enum {
	INVALID_REQUEST_CODE = -1,
	TEST_CODE_0 = 1000,
	TEST_CODE_1 = 1001,
	TEST_CODE_2 = 1002
} request_code_t;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// STRUCTS AND STRUCT TYPEDEFS
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// TYPEDEFS
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// CONSTANTS
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// FUNCTION PROTOTYPES
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

#endif // REQUEST_CODE_H
