/*********************  P r o g r a m  -  M o d u l e ***********************/
/*!
 *        \file  smb2_shc_doc.c
 *
 *      \author  andreas.werner@men.de
 *        $Date: 2017/09/20 13:25:55 $
 *    $Revision: 1.3 $
 *
 *      \brief   User documentation for SMB2_SHC (Shelf Controller API)
 *
 *     Required: -
 *
 *     \switches -
 */
 /*-------------------------------[ History ]--------------------------------
 *
 * $Log: smb2_shc_doc.c,v $
 * Revision 1.3  2017/09/20 13:25:55  MRoth
 * R: new API function
 * M: added SMB2SHC_SetTemperature() to feature list
 *
 * Revision 1.2  2015/02/24 17:26:50  MRoth
 * R: cosmetics
 * M: revised code
 *
 * Revision 1.1  2014/10/15 13:01:01  awerner
 * Initial Revision
 *
 *---------------------------------------------------------------------------
 * (c) Copyright 2014 by MEN Mikro Elektronik GmbH, Nuernberg, Germany
 ****************************************************************************/

/*! \mainpage

  This document describes the SMB2SHC API to access the MEN Shelf Controller.
\n
  The Shelf Controller also called SHC can be controlled using the I2C/SMBus\n
  interface.\n
  The SMB2SHC API uses the SMBus interface from the SMB2_API which\n
  provides e.g. ReadByteData and ReadBlockData to access the SMBus.\n

\n
  The main features of the Shelf controller API are:\n
		- Get the power supply status SMB2SHC_GetPSU_State()
		- Get the system temperature  SMB2SHC_GetTemperature()
		- Set the ambient temperature SMB2SHC_SetTemperature()
		- Get the fan status          SMB2SHC_GetFAN_State()
		- Get the voltage levels      SMB2SHC_GetVoltLevel()
		- Get the UPS charging state  SMB2SHC_GetUPS_State()
		- Get the configuration data  SMB2SHC_GetConf_Data()
		- ...

\n
  <b>Calling example of a SMB2SHC function:</b>
  \verbatim
  err = SMB2SHC_GetTemperature(u_int16 *value); \endverbatim

\n

*/
/** \example smb2_shc_ctrl.c */
/*! \page dummy

 \menimages

*/


