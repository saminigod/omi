TOP = ../..
include $(TOP)/config.mak

CXXUNITTEST = test_micxx

SOURCES = $(TOP)/ut/omitestcommon.cpp \
    $(TOP)/ut/omifaultsimtest.cpp \
    $(TOP)/tests/base/schema.c \
    test_array.cpp \
    test_datetime.cpp  \
    test_micxx.cpp \
    test_string.cpp

INCLUDES = $(TOP) $(TOP)/common $(TOP)/tests/base

DEFINES = TEST_BUILD

LIBRARIES = micxx omi_error wsman xmlserializer protocol sock base pal nits

DEPLIBS = $(LIBDIR)/libmicxx.$(SHLIB_EXT) \
          $(LIBDIR)/libomi_error.a \
          $(LIBDIR)/libwsman.a \
          $(LIBDIR)/libxmlserializer.a \
          $(LIBDIR)/libprotocol.a \
          $(LIBDIR)/libsock.a \
          $(LIBDIR)/libbase.a \
          $(LIBDIR)/libpal.a \
          $(LIBDIR)/libnits.$(SHLIB_EXT)

include $(TOP)/mak/rules.mak

tests:
	$(call RUNUNITTEST)
