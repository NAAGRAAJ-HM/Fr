/******************************************************************************/
/* File   : Fr.cpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infFr_EcuM.hpp"
#include "infFr_Dcm.hpp"
#include "infFr_SchM.hpp"

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
      public abstract_module
{
   public:
      module_Fr(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, FR_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, FR_CONFIG_DATA, FR_APPL_CONST) lptrCfgModule
      );
      FUNC(void, FR_CODE) DeInitFunction (void);
      FUNC(void, FR_CODE) MainFunction   (void);
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
#include "CfgFr.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Fr, FR_VAR) Fr(
   {
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
   if(E_OK == IsInitDone){
#if(STD_ON == Fr_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Fr_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfg_CanIf as back-up configuration
            lptrCfg = PBcfg_CanIf;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == Fr_InitCheck)
   }
#endif
}

FUNC(void, FR_CODE) module_Fr::DeInitFunction(void){
#if(STD_ON == Fr_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Fr_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == Fr_InitCheck)
   }
#endif
}

FUNC(void, FR_CODE) module_Fr::MainFunction(void){
#if(STD_ON == Fr_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Fr_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
#if(STD_ON == Fr_InitCheck)
   }
#endif
}

class class_Fr_Unused{
   public:
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
};

FUNC(void, FR_CODE) class_Fr_Unused::ControllerInit(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::SendMTS(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::StopMTS(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::CheckMTS(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::StartCommunication(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::AllowColdStart(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::HaltCommunication(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::AbortCommunication(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::SendWUP(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::SetWakeupChannel(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::SetExtSync(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::GetSyncState(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::GetPOCStatus(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::TransmitTxLPdu(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::ReceiveRxLPdu(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::CheckTxLPduStatus(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::PrepareLPdu(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::GetGlobalTime(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::GetNmVector(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::SetAbsoluteTimer(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::SetRelativeTimer(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::CancelAbsoluteTimer(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::CancelRelativeTimer(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::EnableAbsoluteTimerIRQ(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::EnableRelativeTimerIRQ(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::AckAbsoluteTimerIRQ(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::AckRelativeTimerIRQ(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::DisableAbsoluteTimerIRQ(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::DisableRelativeTimerIRQ(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::GetAbsoluteTimerIRQStatus(void){
}

FUNC(void, FR_CODE) class_Fr_Unused::GetRelativeTimerIRQStatus(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

