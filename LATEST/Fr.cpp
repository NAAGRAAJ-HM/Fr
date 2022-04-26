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
class class_Fr_Functionality{
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

class module_Fr:
      public abstract_module
   ,  public class_Fr_Functionality
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
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Fr_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgFr;
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
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
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
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == Fr_InitCheck)
   }
#endif
}

FUNC(void, FR_CODE) class_Fr_Functionality::ControllerInit(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::SendMTS(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::StopMTS(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::CheckMTS(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::StartCommunication(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::AllowColdStart(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::HaltCommunication(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::AbortCommunication(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::SendWUP(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::SetWakeupChannel(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::SetExtSync(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::GetSyncState(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::GetPOCStatus(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::TransmitTxLPdu(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::ReceiveRxLPdu(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::CheckTxLPduStatus(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::PrepareLPdu(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::GetGlobalTime(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::GetNmVector(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::SetAbsoluteTimer(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::SetRelativeTimer(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::CancelAbsoluteTimer(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::CancelRelativeTimer(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::EnableAbsoluteTimerIRQ(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::EnableRelativeTimerIRQ(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::AckAbsoluteTimerIRQ(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::AckRelativeTimerIRQ(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::DisableAbsoluteTimerIRQ(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::DisableRelativeTimerIRQ(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::GetAbsoluteTimerIRQStatus(void){
}

FUNC(void, FR_CODE) class_Fr_Functionality::GetRelativeTimerIRQStatus(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

