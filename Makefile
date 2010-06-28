# vim:syntax=make:
# -*- Mode: Makefile -*-

#WARNING COMPONENT_PATH is MANDATORY for Make.config and Make.rules
#-------------------------------
# Default Config
#-------------------------------
include $(MMROOT)/shared/makefiles/Make.config

################################################################################
# library

ifeq ($(DEBUG),1)
CPPFLAGS     += -DDEBUG
endif

SOLIBNAMES    += blt_hw
LIBOBJ_blt_hw  = blt_b2r2
INSTALL_SOLIB  = blt_hw

INSTALL_HEADER = blt_api.h

todo: solib

#-------------------------------
# Generic Rules
#-------------------------------
include $(MMROOT)/shared/makefiles/Make.rules
