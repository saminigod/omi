TOP = ../..
include $(TOP)/config.mak

CXXUNITTEST = test_oi

SOURCES = $(TOP)/ut/omitestcommon.cpp $(TOP)/ut/omifaultsimtest.cpp test_oi.cpp

INCLUDES = $(TOP) $(TOP)/common $(TOP)/oi/gen_c/common

LIBRARIES = omi_error wsman http xmlserializer xml protocol sock oicommon ut base pal nits
DEPLIBS = $(LIBDIR)/libomi_error.a \
          $(LIBDIR)/libwsman.a \
          $(LIBDIR)/libhttp.a \
          $(LIBDIR)/libxmlserializer.a \
          $(LIBDIR)/libxml.a \
          $(LIBDIR)/libprotocol.a \
          $(LIBDIR)/libsock.a \
          $(LIBDIR)/liboicommon.a \
          $(LIBDIR)/libut.a \
          $(LIBDIR)/libbase.a \
          $(LIBDIR)/libpal.a \
          $(LIBDIR)/libnits.$(SHLIB_EXT)

DEFINES = TEST_BUILD

include $(TOP)/mak/rules.mak

tests:
	$(call RUNUNITTEST)

vg:
	$(call RUNVALGRIND)
