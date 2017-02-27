TOP = ../..
include $(TOP)/config.mak

CXXUNITTEST = test_protocol

SOURCES = $(TOP)/ut/omitestcommon.cpp \
    $(TOP)/ut/omifaultsimtest.cpp \
    test_protocol.cpp \
    $(TOP)/tests/base/schema.c

INCLUDES = $(TOP) $(TOP)/common

LIBRARIES = micxx protocol sock base $(UNITTESTLIBS) pal  omi_error wsman xmlserializer base
DEPLIBS = $(LIBDIR)/libmicxx.$(SHLIB_EXT) \
          $(LIBDIR)/libprotocol.a \
          $(LIBDIR)/libsock.a \
          $(LIBDIR)/libbase.a \
          $(LIBDIR)/libpal.a \
          $(LIBDIR)/libomi_error.a \
          $(LIBDIR)/libwsman.a \
          $(LIBDIR)/libxmlserializer.a

DEFINES = TEST_BUILD

include $(TOP)/mak/rules.mak

tests:
	$(call RUNUNITTEST)
