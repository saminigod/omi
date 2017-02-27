TOP = ../..
include $(TOP)/config.mak

CXXUNITTEST = test_miapi

SOURCES = $(TOP)/ut/omitestcli.cpp $(TOP)/ut/omifaultsimtest.cpp main.cpp schema.c TestProtocolHandlerCache.cpp TestTransport.cpp

INCLUDES = $(TOP) $(TOP)/common

LIBRARIES = test_util xml base miapi protocol sock $(UNITTESTLIBS) omi_error wsman http pal xmlserializer xml base micodec mofparser
DEPLIBS = $(LIBDIR)/libtest_util.a \
          $(LIBDIR)/libxml.a \
          $(LIBDIR)/libbase.a \
          $(LIBDIR)/libmiapi.a \
          $(LIBDIR)/libprotocol.a \
          $(LIBDIR)/libsock.a \
          $(LIBDIR)/libomi_error.a \
          $(LIBDIR)/libwsman.a \
          $(LIBDIR)/libhttp.a \
          $(LIBDIR)/libpal.a \
          $(LIBDIR)/libxmlserializer.a \
          $(LIBDIR)/libxml.a \
          $(LIBDIR)/libbase.a \
          $(LIBDIR)/libmicodec.a \
          $(LIBDIR)/libmofparser.a

include $(TOP)/mak/rules.mak

DEFINES = DETECT_FORBIDDEN_FUNCTIONS TEST_BUILD

tests:
	$(call RUNUNITTEST)

vg:
	$(call RUNVALGRIND)
