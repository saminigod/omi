TOP = ../..
include $(TOP)/config.mak

CXXUNITTEST = test_io

SOURCES = $(TOP)/ut/omitestcommon.cpp $(TOP)/ut/omifaultsimtest.cpp test_io.cpp

INCLUDES = $(TOP) $(TOP)/common

DEFINES = TEST_BUILD

LIBRARIES = omi_error wsman xmlserializer protocol sock base pal nits

DEPLIBS = $(LIBDIR)/libprotocol.a \
          $(LIBDIR)/libsock.a \
          $(LIBDIR)/libbase.a \
          $(LIBDIR)/libpal.a \
          $(LIBDIR)/libomi_error.a \
          $(LIBDIR)/libwsman.a \
          $(LIBDIR)/libxmlserializer.a \
          $(LIBDIR)/libbase.a

include $(TOP)/mak/rules.mak

tests:
	$(call RUNUNITTEST)

vg:
	$(call RUNVALGRIND)
