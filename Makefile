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
LIBOBJ        = b2r2_api
INSTALL_LIB   = libst_b2r2.a
INSTALL_HEADER = b2r2_api.h
LIBNAME       = st_b2r2

todo: lib
#-------------------------------
# Generic Rules
#-------------------------------
include $(MMROOT)/shared/makefiles/Make.rules




