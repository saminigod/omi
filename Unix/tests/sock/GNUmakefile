TOP = ../..
include $(TOP)/config.mak

CXXUNITTEST = test_sock

SOURCES = $(TOP)/ut/omitestcommon.cpp \
    $(TOP)/ut/omifaultsimtest.cpp \
    test_selector.cpp

INCLUDES = $(TOP) $(TOP)/common

LIBRARIES = omi_error wsman xmlserializer protocol sock base pal ut nits

DEPLIBS = $(LIBDIR)/libomi_error.a \
          $(LIBDIR)/libwsman.a \
          $(LIBDIR)/libxmlserializer.a \
          $(LIBDIR)/libprotocol.a \
          $(LIBDIR)/libsock.a \
          $(LIBDIR)/libbase.a \
          $(LIBDIR)/libpal.a \
          $(LIBDIR)/libut.a \
          $(LIBDIR)/libnits.$(SHLIB_EXT)

DEFINES = TEST_BUILD

include $(TOP)/mak/rules.mak

tests:
	$(call RUNUNITTEST)
