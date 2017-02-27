TOP = ../..
include $(TOP)/config.mak

CXXUNITTEST = test_wql

SOURCES = $(TOP)/ut/omitestcommon.cpp $(TOP)/ut/omifaultsimtest.cpp test_wql.cpp

INCLUDES = $(TOP) $(TOP)/common

DEFINES = DETECT_FORBIDDEN_FUNCTIONS TEST_BUILD

LIBRARIES = omi_error wsman xmlserializer protocol sock wql base pal ut nits

DEPLIBS = $(LIBDIR)/libomi_error.a \
          $(LIBDIR)/libwsman.a \
          $(LIBDIR)/libxmlserializer.a \
          $(LIBDIR)/libprotocol.a \
          $(LIBDIR)/libsock.a \
          $(LIBDIR)/libwql.a \
          $(LIBDIR)/libbase.a \
          $(LIBDIR)/libpal.a \
          $(LIBDIR)/libut.a \
          $(LIBDIR)/libnits.$(SHLIB_EXT)

include $(TOP)/mak/rules.mak

tests:
	$(call RUNUNITTEST)
