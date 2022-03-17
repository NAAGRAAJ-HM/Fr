/******************************************************************************/
/* File   : Fr.cpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infFr_Version.h"

#include "module.h"
#include "infFr_EcuM.h"
#include "infFr_Dcm.h"
#include "infFr_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Fr:
      public abstract_module
{
   public:
      FUNC(void, FR_CODE) InitFunction   (void);
      FUNC(void, FR_CODE) DeInitFunction (void);
      FUNC(void, FR_CODE) GetVersionInfo (void);
      FUNC(void, FR_CODE) MainFunction   (void);
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


/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
VAR(module_Fr, FR_VAR) Fr;
CONSTP2VAR(infEcuMClient, FR_VAR, FR_CONST) gptrinfEcuMClient_Fr = &Fr;
CONSTP2VAR(infDcmClient,  FR_VAR, FR_CONST) gptrinfDcmClient_Fr  = &Fr;
CONSTP2VAR(infSchMClient, FR_VAR, FR_CONST) gptrinfSchMClient_Fr = &Fr;

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

