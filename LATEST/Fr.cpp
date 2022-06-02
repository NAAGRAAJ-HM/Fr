/******************************************************************************/
/* File   : Fr.cpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgFr.hpp"
#include "Fr_core.hpp"
#include "infFr_Exp.hpp"

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
class module_Fr:
      INTERFACES_EXPORTED_FR
      public abstract_module
   ,  public class_Fr_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};

   public:
      module_Fr(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, FR_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, FR_CONFIG_DATA, FR_APPL_CONST) lptrCfgModule
      );
      FUNC(void, FR_CODE) DeInitFunction (void);
      FUNC(void, FR_CODE) MainFunction   (void);
      FR_CORE_FUNCTIONALITIES
};

extern VAR(module_Fr, FR_VAR) Fr;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, FR_VAR, FR_CONST) gptrinfEcuMClient_Fr = &Fr;
CONSTP2VAR(infDcmClient,  FR_VAR, FR_CONST) gptrinfDcmClient_Fr  = &Fr;
CONSTP2VAR(infSchMClient, FR_VAR, FR_CONST) gptrinfSchMClient_Fr = &Fr;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Fr, FR_VAR) Fr(
   {
#if(STD_ON == _ReSIM)
// char strModuleName[6];
#else
#endif
         FR_AR_RELEASE_VERSION_MAJOR
      ,  FR_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

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
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgFr;
         }
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

FUNC(void, FR_CODE) module_Fr::DeInitFunction(void){
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

FUNC(void, FR_CODE) module_Fr::MainFunction(void){
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

FUNC(void, FR_CODE) module_Fr::ControllerInit(void){
}

FUNC(void, FR_CODE) module_Fr::SendMTS(void){
}

FUNC(void, FR_CODE) module_Fr::StopMTS(void){
}

FUNC(void, FR_CODE) module_Fr::CheckMTS(void){
}

FUNC(void, FR_CODE) module_Fr::StartCommunication(void){
}

FUNC(void, FR_CODE) module_Fr::AllowColdStart(void){
}

FUNC(void, FR_CODE) module_Fr::HaltCommunication(void){
}

FUNC(void, FR_CODE) module_Fr::AbortCommunication(void){
}

FUNC(void, FR_CODE) module_Fr::SendWUP(void){
}

FUNC(void, FR_CODE) module_Fr::SetWakeupChannel(void){
}

FUNC(void, FR_CODE) module_Fr::SetExtSync(void){
}

FUNC(void, FR_CODE) module_Fr::GetSyncState(void){
}

FUNC(void, FR_CODE) module_Fr::GetPOCStatus(void){
}

FUNC(void, FR_CODE) module_Fr::TransmitTxLPdu(void){
}

FUNC(void, FR_CODE) module_Fr::ReceiveRxLPdu(void){
}

FUNC(void, FR_CODE) module_Fr::CheckTxLPduStatus(void){
}

FUNC(void, FR_CODE) module_Fr::PrepareLPdu(void){
}

FUNC(void, FR_CODE) module_Fr::GetGlobalTime(void){
}

FUNC(void, FR_CODE) module_Fr::GetNmVector(void){
}

FUNC(void, FR_CODE) module_Fr::SetAbsoluteTimer(void){
}

FUNC(void, FR_CODE) module_Fr::SetRelativeTimer(void){
}

FUNC(void, FR_CODE) module_Fr::CancelAbsoluteTimer(void){
}

FUNC(void, FR_CODE) module_Fr::CancelRelativeTimer(void){
}

FUNC(void, FR_CODE) module_Fr::EnableAbsoluteTimerIRQ(void){
}

FUNC(void, FR_CODE) module_Fr::EnableRelativeTimerIRQ(void){
}

FUNC(void, FR_CODE) module_Fr::AckAbsoluteTimerIRQ(void){
}

FUNC(void, FR_CODE) module_Fr::AckRelativeTimerIRQ(void){
}

FUNC(void, FR_CODE) module_Fr::DisableAbsoluteTimerIRQ(void){
}

FUNC(void, FR_CODE) module_Fr::DisableRelativeTimerIRQ(void){
}

FUNC(void, FR_CODE) module_Fr::GetAbsoluteTimerIRQStatus(void){
}

FUNC(void, FR_CODE) module_Fr::GetRelativeTimerIRQStatus(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

