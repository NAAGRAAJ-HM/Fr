#pragma once
/******************************************************************************/
/* File   : McalFr_Version.hpp                                                */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALFR_AR_RELEASE_VERSION_MAJOR                                        4
#define MCALFR_AR_RELEASE_VERSION_MINOR                                        3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MCALFR_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible MCALFR_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(MCALFR_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible MCALFR_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

