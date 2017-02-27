TOP = ../..
include $(TOP)/config.mak

CXXUNITTEST = test_http

SOURCES = $(TOP)/ut/omitestcommon.cpp \
    $(TOP)/ut/omifaultsimtest.cpp \
    test_http.cpp \
    test_httpclient.cpp \

INCLUDES = $(TOP) $(TOP)/common

DEFINES = DETECT_FORBIDDEN_FUNCTIONS TEST_BUILD

LIBRARIES = http protocol sock base mi $(UNITTESTLIBS) pal omi_error wsman xmlserializer base

DEPLIBS =$(LIBDIR)/libhttp.a \
         $(LIBDIR)/libprotocol.a \
         $(LIBDIR)/libsock.a \
         $(LIBDIR)/libbase.a \
         $(LIBDIR)/libmi.$(SHLIB_EXT)\
         $(LIBDIR)/libpal.a \
         $(LIBDIR)/libomi_error.a \
         $(LIBDIR)/libwsman.a \
         $(LIBDIR)/libxmlserializer.a \
         $(LIBDIR)/libbase.a

include $(TOP)/mak/rules.mak

tests:
	$(call RUNUNITTEST)
