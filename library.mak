#***************************  M a k e f i l e  *******************************
#
#         Author: andreas.werner@men.de
#          $Date: 2015/02/24 17:26:53 $
#      $Revision: 1.2 $
#
#    Description: Makefile descriptor file for SMB2_SHC lib
#
#---------------------------------[ History ]---------------------------------
#
#   $Log: library.mak,v $
#   Revision 1.2  2015/02/24 17:26:53  MRoth
#   R: cosmetics
#   M: revised code
#
#-----------------------------------------------------------------------------
#   (c) Copyright 2015 by MEN mikro elektronik GmbH, Nuernberg, Germany
#*****************************************************************************

MAK_NAME=smb2_shc
MAK_LIBS=$(LIB_PREFIX)$(MEN_LIB_DIR)/smb2_api$(LIB_SUFFIX)  \

MAK_INCL=$(MEN_INC_DIR)/men_typs.h  \
         $(MEN_INC_DIR)/smb2_api.h  \
         $(MEN_INC_DIR)/smb2_shc.h

MAK_INP1 = smb2_shc$(INP_SUFFIX)

MAK_INP  = $(MAK_INP1)

