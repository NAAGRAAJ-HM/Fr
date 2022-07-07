/******************************************************************************/
/* File   : Fr.cpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Fr.hpp"
#include "infFr_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define FR_AR_RELEASE_VERSION_MAJOR                                            4
#define FR_AR_RELEASE_VERSION_MINOR                                            3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(FR_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible FR_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(FR_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible FR_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Fr, FR_VAR) Fr;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, FR_CODE) module_Fr::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, FR_CONFIG_DATA, FR_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Fr_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         lptrCfg = lptrCfgModule;
      }
      else{
#if(STD_ON == Fr_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Fr_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Fr_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FR_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FR_CODE) module_Fr::DeInitFunction(
   void
){
#if(STD_ON == Fr_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Fr_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Fr_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FR_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FR_CODE) module_Fr::MainFunction(
   void
){
#if(STD_ON == Fr_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Fr_InitCheck)
   }
   else{
#if(STD_ON == Fr_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FR_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FR_CODE) module_Fr::ControllerInit(
   void
){
}

FUNC(void, FR_CODE) module_Fr::SendMTS(
   void
){
}

FUNC(void, FR_CODE) module_Fr::StopMTS(
   void
){
}

FUNC(void, FR_CODE) module_Fr::CheckMTS(
   void
){
}

FUNC(void, FR_CODE) module_Fr::StartCommunication(
   void
){
}

FUNC(void, FR_CODE) module_Fr::AllowColdStart(
   void
){
}

FUNC(void, FR_CODE) module_Fr::HaltCommunication(
   void
){
}

FUNC(void, FR_CODE) module_Fr::AbortCommunication(
   void
){
}

FUNC(void, FR_CODE) module_Fr::SendWUP(
   void
){
}

FUNC(void, FR_CODE) module_Fr::SetWakeupChannel(
   void
){
}

FUNC(void, FR_CODE) module_Fr::SetExtSync(
   void
){
}

FUNC(void, FR_CODE) module_Fr::GetSyncState(
   void
){
}

FUNC(void, FR_CODE) module_Fr::GetPOCStatus(
   void
){
}

FUNC(void, FR_CODE) module_Fr::TransmitTxLPdu(
   void
){
}

FUNC(void, FR_CODE) module_Fr::ReceiveRxLPdu(
   void
){
}

FUNC(void, FR_CODE) module_Fr::CheckTxLPduStatus(
   void
){
}

FUNC(void, FR_CODE) module_Fr::PrepareLPdu(
   void
){
}

FUNC(void, FR_CODE) module_Fr::GetGlobalTime(
   void
){
}

FUNC(void, FR_CODE) module_Fr::GetNmVector(
   void
){
}

FUNC(void, FR_CODE) module_Fr::SetAbsoluteTimer(
   void
){
}

FUNC(void, FR_CODE) module_Fr::SetRelativeTimer(
   void
){
}

FUNC(void, FR_CODE) module_Fr::CancelAbsoluteTimer(
   void
){
}

FUNC(void, FR_CODE) module_Fr::CancelRelativeTimer(
   void
){
}

FUNC(void, FR_CODE) module_Fr::EnableAbsoluteTimerIRQ(
   void
){
}

FUNC(void, FR_CODE) module_Fr::EnableRelativeTimerIRQ(
   void
){
}

FUNC(void, FR_CODE) module_Fr::AckAbsoluteTimerIRQ(
   void
){
}

FUNC(void, FR_CODE) module_Fr::AckRelativeTimerIRQ(
   void
){
}

FUNC(void, FR_CODE) module_Fr::DisableAbsoluteTimerIRQ(
   void
){
}

FUNC(void, FR_CODE) module_Fr::DisableRelativeTimerIRQ(
   void
){
}

FUNC(void, FR_CODE) module_Fr::GetAbsoluteTimerIRQStatus(
   void
){
}

FUNC(void, FR_CODE) module_Fr::GetRelativeTimerIRQStatus(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

