/******************************************************************************/
/* File   : McalFr.cpp                                                            */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "McalFr.hpp"
#include "infMcalFr_Imp.hpp"

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
VAR(module_McalFr, FR_VAR) McalFr;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, FR_CODE) module_McalFr::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, FR_CONST,       FR_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   FR_CONFIG_DATA, FR_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalFr_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstMcalFr_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalFr_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalFr_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalFr_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FR_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FR_CODE) module_McalFr::DeInitFunction(
   void
){
#if(STD_ON == McalFr_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalFr_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalFr_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FR_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FR_CODE) module_McalFr::MainFunction(
   void
){
#if(STD_ON == McalFr_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalFr_InitCheck)
   }
   else{
#if(STD_ON == McalFr_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FR_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FR_CODE) module_McalFr::ControllerInit(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::SendMTS(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::StopMTS(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::CheckMTS(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::StartServiceCommunication(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::AllowColdStart(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::HaltServiceCommunication(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::AbortServiceCommunication(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::SendWUP(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::SetWakeupChannel(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::SetExtSync(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::GetSyncState(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::GetPOCStatus(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::TransmitTxLPdu(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::ReceiveRxLPdu(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::CheckTxLPduStatus(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::PrepareLPdu(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::GetGlobalTime(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::GetServiceNmVector(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::SetAbsoluteTimer(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::SetRelativeTimer(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::McalCancelAbsoluteTimer(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::McalCancelRelativeTimer(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::EnableAbsoluteTimerIRQ(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::EnableRelativeTimerIRQ(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::AckAbsoluteTimerIRQ(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::AckRelativeTimerIRQ(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::DisableAbsoluteTimerIRQ(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::DisableRelativeTimerIRQ(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::GetAbsoluteTimerIRQStatus(
   void
){
}

FUNC(void, FR_CODE) module_McalFr::GetRelativeTimerIRQStatus(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

