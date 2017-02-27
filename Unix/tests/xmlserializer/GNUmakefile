TOP = ../..
include $(TOP)/config.mak

CXXUNITTEST = test_xmlserializer

$(shell mkdir -p $(OBJDIR)/unittest)

SOURCES = $(TOP)/ut/omitestcommon.cpp $(TOP)/ut/omifaultsimtest.cpp $(wildcard ../../samples/Providers/Test_SchemaRetrieval/*.c) test_xmlserializer.cpp	

INCLUDES = $(TOP) $(TOP)/common

DEFINES = TEST_BUILD

LIBRARIES = omi_error wsman xmlserializer xml protocol sock base pal nits

DEPLIBS = $(LIBDIR)/libomi_error.a \
          $(LIBDIR)/libwsman.a \
          $(LIBDIR)/libxmlserializer.a \
          $(LIBDIR)/libprotocol.a \
          $(LIBDIR)/libsock.a \
          $(LIBDIR)/libxml.a \
          $(LIBDIR)/libbase.a \
          $(LIBDIR)/libpal.a \
          $(LIBDIR)/libnits.$(SHLIB_EXT)

CACHEGRIND_ARGS = $(TARGET)

include $(TOP)/mak/rules.mak

tests:
	$(call RUNUNITTEST)

vt:
	$(call RUNUNITTESTWITHTRACE)

vg:
	$(call RUNVALGRIND)
