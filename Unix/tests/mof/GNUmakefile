TOP = ../..
include $(TOP)/config.mak

CXXUNITTEST = test_mof

SOURCES = $(TOP)/ut/omitestcommon.cpp $(TOP)/ut/omifaultsimtest.cpp test_mof.cpp

INCLUDES = $(TOP) $(TOP)/mof $(TOP)/common

DEFINES = TEST_BUILD

LIBRARIES = omi_error wsman http xmlserializer protocol sock mof ut base pal nits

DEPLIBS = $(LIBDIR)/libomi_error.a \
          $(LIBDIR)/libwsman.a \
          $(LIBDIR)/libhttp.a \
          $(LIBDIR)/libxmlserializer.a \
          $(LIBDIR)/libprotocol.a \
          $(LIBDIR)/libsock.a \
          $(LIBDIR)/libmof.a \
          $(LIBDIR)/libut.a \
          $(LIBDIR)/libbase.a \
          $(LIBDIR)/libpal.a \
          $(LIBDIR)/libnits.$(SHLIB_EXT)

include $(TOP)/mak/rules.mak

tests:
	$(call RUNUNITTEST)
