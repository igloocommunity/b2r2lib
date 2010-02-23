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
LIBOBJ        = blt_b2r2
INSTALL_LIB   = libblt_hw.so
INSTALL_HEADER = blt_api.h
LIBNAME       = blt_hw

todo: solib
#-------------------------------
# Generic Rules
#-------------------------------
include $(MMROOT)/shared/makefiles/Make.rules
