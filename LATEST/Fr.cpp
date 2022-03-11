/*****************************************************/
/* File   : Fr.cpp                                   */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infFr_EcuM.h"
#include "infFr_Dcm.h"
#include "infFr_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Fr:
      public abstract_module
{
   public:
      FUNC(void, FR_CODE) InitFunction   (void);
      FUNC(void, FR_CODE) DeInitFunction (void);
      FUNC(void, FR_CODE) GetVersionInfo (void);
      FUNC(void, FR_CODE) MainFunction   (void);
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
module_Fr      Fr;
infEcuMClient* gptrinfEcuMClient_Fr = &Fr;
infDcmClient*  gptrinfDcmClient_Fr  = &Fr;
infSchMClient* gptrinfSchMClient_Fr = &Fr;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, FR_CODE) module_Fr::InitFunction(void){
}

FUNC(void, FR_CODE) module_Fr::DeInitFunction(void){
}

FUNC(void, FR_CODE) module_Fr::GetVersionInfo(void){
}

FUNC(void, FR_CODE) module_Fr::MainFunction(void){
}

#include "Fr_Unused.h"

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

/*****************************************************/
/* EOF                                               */
/*****************************************************/

