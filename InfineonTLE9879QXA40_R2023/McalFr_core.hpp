#pragma once
/******************************************************************************/
/* File   : McalFr_core.hpp                                                       */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalFr.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALFR_CORE_FUNCTIONALITIES                                                \
              FUNC(void, MCALFR_CODE) ControllerInit            (void);            \
              FUNC(void, MCALFR_CODE) SendMTS                   (void);            \
              FUNC(void, MCALFR_CODE) StopMTS                   (void);            \
              FUNC(void, MCALFR_CODE) CheckMTS                  (void);            \
              FUNC(void, MCALFR_CODE) StartServiceCommunication        (void);            \
              FUNC(void, MCALFR_CODE) AllowColdStart            (void);            \
              FUNC(void, MCALFR_CODE) HaltServiceCommunication         (void);            \
              FUNC(void, MCALFR_CODE) AbortServiceCommunication        (void);            \
              FUNC(void, MCALFR_CODE) SendWUP                   (void);            \
              FUNC(void, MCALFR_CODE) SetWakeupChannel          (void);            \
              FUNC(void, MCALFR_CODE) SetExtSync                (void);            \
              FUNC(void, MCALFR_CODE) GetSyncState              (void);            \
              FUNC(void, MCALFR_CODE) GetPOCStatus              (void);            \
              FUNC(void, MCALFR_CODE) TransmitTxLPdu            (void);            \
              FUNC(void, MCALFR_CODE) ReceiveRxLPdu             (void);            \
              FUNC(void, MCALFR_CODE) CheckTxLPduStatus         (void);            \
              FUNC(void, MCALFR_CODE) PrepareLPdu               (void);            \
              FUNC(void, MCALFR_CODE) GetGlobalTime             (void);            \
              FUNC(void, MCALFR_CODE) GetServiceNmVector               (void);            \
              FUNC(void, MCALFR_CODE) SetAbsoluteTimer          (void);            \
              FUNC(void, MCALFR_CODE) SetRelativeTimer          (void);            \
              FUNC(void, MCALFR_CODE) McalCancelAbsoluteTimer       (void);            \
              FUNC(void, MCALFR_CODE) McalCancelRelativeTimer       (void);            \
              FUNC(void, MCALFR_CODE) EnableAbsoluteTimerIRQ    (void);            \
              FUNC(void, MCALFR_CODE) EnableRelativeTimerIRQ    (void);            \
              FUNC(void, MCALFR_CODE) AckAbsoluteTimerIRQ       (void);            \
              FUNC(void, MCALFR_CODE) AckRelativeTimerIRQ       (void);            \
              FUNC(void, MCALFR_CODE) DisableAbsoluteTimerIRQ   (void);            \
              FUNC(void, MCALFR_CODE) DisableRelativeTimerIRQ   (void);            \
              FUNC(void, MCALFR_CODE) GetAbsoluteTimerIRQStatus (void);            \
              FUNC(void, MCALFR_CODE) GetRelativeTimerIRQStatus (void);            \

#define MCALFR_CORE_FUNCTIONALITIES_VIRTUAL                                        \
      virtual FUNC(void, MCALFR_CODE) ControllerInit            (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) SendMTS                   (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) StopMTS                   (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) CheckMTS                  (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) StartServiceCommunication        (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) AllowColdStart            (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) HaltServiceCommunication         (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) AbortServiceCommunication        (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) SendWUP                   (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) SetWakeupChannel          (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) SetExtSync                (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) GetSyncState              (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) GetPOCStatus              (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) TransmitTxLPdu            (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) ReceiveRxLPdu             (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) CheckTxLPduStatus         (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) PrepareLPdu               (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) GetGlobalTime             (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) GetServiceNmVector               (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) SetAbsoluteTimer          (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) SetRelativeTimer          (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) McalCancelAbsoluteTimer       (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) McalCancelRelativeTimer       (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) EnableAbsoluteTimerIRQ    (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) EnableRelativeTimerIRQ    (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) AckAbsoluteTimerIRQ       (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) AckRelativeTimerIRQ       (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) DisableAbsoluteTimerIRQ   (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) DisableRelativeTimerIRQ   (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) GetAbsoluteTimerIRQStatus (void) = 0;        \
      virtual FUNC(void, MCALFR_CODE) GetRelativeTimerIRQStatus (void) = 0;        \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalFr_Functionality{
   public:
      MCALFR_CORE_FUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

