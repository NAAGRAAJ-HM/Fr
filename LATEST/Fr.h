#pragma once
/*****************************************************/
/* File   : Fr.h                                     */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Std_Types.h"
#include "Compiler_Cfg_Fr.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_Fr{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, FR_CODE) ControllerInit            (void);
      FUNC(void, FR_CODE) SendMTS                   (void);
      FUNC(void, FR_CODE) StopMTS                   (void);
      FUNC(void, FR_CODE) CheckMTS                  (void);
      FUNC(void, FR_CODE) StartCommunication        (void);
      FUNC(void, FR_CODE) AllowColdStart            (void);
      FUNC(void, FR_CODE) HaltCommunication         (void);
      FUNC(void, FR_CODE) AbortCommunication        (void);
      FUNC(void, FR_CODE) SendWUP                   (void);
      FUNC(void, FR_CODE) SetWakeupChannel          (void);
      FUNC(void, FR_CODE) SetExtSync                (void);
      FUNC(void, FR_CODE) GetSyncState              (void);
      FUNC(void, FR_CODE) GetPOCStatus              (void);
      FUNC(void, FR_CODE) TransmitTxLPdu            (void);
      FUNC(void, FR_CODE) ReceiveRxLPdu             (void);
      FUNC(void, FR_CODE) CheckTxLPduStatus         (void);
      FUNC(void, FR_CODE) PrepareLPdu               (void);
      FUNC(void, FR_CODE) GetGlobalTime             (void);
      FUNC(void, FR_CODE) GetNmVector               (void);
      FUNC(void, FR_CODE) SetAbsoluteTimer          (void);
      FUNC(void, FR_CODE) SetRelativeTimer          (void);
      FUNC(void, FR_CODE) CancelAbsoluteTimer       (void);
      FUNC(void, FR_CODE) CancelRelativeTimer       (void);
      FUNC(void, FR_CODE) EnableAbsoluteTimerIRQ    (void);
      FUNC(void, FR_CODE) EnableRelativeTimerIRQ    (void);
      FUNC(void, FR_CODE) AckAbsoluteTimerIRQ       (void);
      FUNC(void, FR_CODE) AckRelativeTimerIRQ       (void);
      FUNC(void, FR_CODE) DisableAbsoluteTimerIRQ   (void);
      FUNC(void, FR_CODE) DisableRelativeTimerIRQ   (void);
      FUNC(void, FR_CODE) GetAbsoluteTimerIRQStatus (void);
      FUNC(void, FR_CODE) GetRelativeTimerIRQStatus (void);
      FUNC(void, FR_CODE) MainFunction              (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern class_Fr Fr;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

