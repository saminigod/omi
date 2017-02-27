TOP = ../..
include $(TOP)/config.mak

CXXUNITTEST = test_cli

SOURCES = $(TOP)/ut/omitestcli.cpp $(TOP)/ut/omifaultsimtest.cpp test_cli.cpp \
    ../../cli/cli_c.c

INCLUDES = $(TOP) $(TOP)/common

DEFINES = TEST_BUILD

LIBRARIES = omiclient test_util micxx wql miapi  protocol sock base $(UNITTESTLIBS)  omi_error wsman http pal xmlserializer xml base micodec mofparser

DEPLIBS =  $(LIBDIR)/libomiclient.$(SHLIB_EXT) \
           $(LIBDIR)/libtest_util.a \
           $(LIBDIR)/libmicxx.$(SHLIB_EXT) \
           $(LIBDIR)/libwql.a \
           $(LIBDIR)/libmiapi.a \
           $(LIBDIR)/libprotocol.a \
           $(LIBDIR)/libsock.a \
           $(LIBDIR)/libbase.a \
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

tests:
	$(call RUNUNITTEST)
