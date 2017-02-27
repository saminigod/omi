TOP = ../..
include $(TOP)/config.mak

CXXUNITTEST = test_wsman

$(shell mkdir -p $(OBJDIR)/unittest)

SOURCES = $(TOP)/ut/omitestcommon.cpp \
    $(TOP)/ut/omifaultsimtest.cpp \
    $(TOP)/tests/base/schema.c \
    test_auth.cpp \
    test_wsbuf.cpp \
    test_wsman.cpp \
    test_wsman_inproc.cpp \
    test_NumberProvider.cpp \
    utils.cpp \
    test_wsmanparser.cpp \
    test_wsmanredirect.cpp \
#    test_wsmanclient.cpp

INCLUDES = $(TOP) $(TOP)/common

DEFINES = TEST_BUILD

LIBRARIES = mi omiclient miapi micxx $(UNITTESTLIBS) $(INDICMNLIB) $(INDIMGRLIB) wsman http protocol sock omi_error xmlserializer xml pal base

DEPLIBS = $(LIBDIR)/libmi.$(SHLIB_EXT) \
          $(LIBDIR)/libomiclient.$(SHLIB_EXT) \
          $(LIBDIR)/libmiapi.a \
          $(LIBDIR)/libmicxx.$(SHLIB_EXT) \
          $(LIBDIR)/libwsman.a \
          $(LIBDIR)/libhttp.a \
          $(LIBDIR)/libprotocol.a \
          $(LIBDIR)/libsock.a \
          $(LIBDIR)/libomi_error.a \
          $(LIBDIR)/libxmlserializer.a \
          $(LIBDIR)/libxml.a \
          $(LIBDIR)/libbase.a \
          $(LIBDIR)/libpal.a \

CACHEGRIND_ARGS = $(TARGET)

include $(TOP)/mak/rules.mak

tests:
	$(call RUNUNITTEST)

vg:
	$(call RUNVALGRIND)
