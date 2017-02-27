TOP = ../..
include $(TOP)/config.mak

CXXUNITTEST = test_pal

$(shell mkdir -p $(OBJDIR)/unittest)

SOURCES = $(TOP)/ut/omitestcommon.cpp $(TOP)/ut/omifaultsimtest.cpp test_pal.cpp

INCLUDES = $(TOP) $(TOP)/common

DEFINES = DETECT_FORBIDDEN_FUNCTIONS TEST_BUILD

LIBRARIES = omi_error wsman http xmlserializer xml protocol sock ut base pal nits

DEPLIBS = $(LIBDIR)/libomi_error.a \
          $(LIBDIR)/libwsman.a \
          $(LIBDIR)/libhttp.a \
          $(LIBDIR)/libxmlserializer.a \
          $(LIBDIR)/libxml.a \
          $(LIBDIR)/libprotocol.a \
          $(LIBDIR)/libsock.a \
          $(LIBDIR)/libut.a \
          $(LIBDIR)/libbase.a \
          $(LIBDIR)/libpal.a \
          $(LIBDIR)/libnits.$(SHLIB_EXT)

ifeq ($(OS),DARWIN)
    SYSLIBRARIES = 
else
    SYSLIBRARIES = rt
endif

include $(TOP)/mak/rules.mak

tests:
	$(call RUNUNITTEST)

