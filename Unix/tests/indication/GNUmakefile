TOP = ../..
include $(TOP)/config.mak

CXXUNITTEST = test_indication

SOURCES = $(TOP)/ut/omitestcommon.cpp $(TOP)/ut/omifaultsimtest.cpp util.cpp \
	test_filter.cpp \
	test_listener.cpp \
	test_mgr.cpp \
	test_subscrip.cpp \
	test_classlist.cpp \
	test_e2e.cpp \

INCLUDES = $(TOP) $(TOP)/common

DEFINES = DETECT_FORBIDDEN_FUNCTIONS TEST_BUILD

LIBRARIES = test_util indimgr indicmn disp provmgr provreg miapi omi_error wsman http protocol sock xmlserializer wql xml base $(UNITTESTLIBS) micodec mofparser

DEPLIBS = $(LIBDIR)/libtest_util.a \
          $(LIBDIR)/libindimgr.a \
          $(LIBDIR)/libindicmn.a \
          $(LIBDIR)/libdisp.a \
          $(LIBDIR)/libprovmgr.a \
          $(LIBDIR)/libprovreg.a \
          $(LIBDIR)/libmiapi.a \
          $(LIBDIR)/libomi_error.a \
          $(LIBDIR)/libwsman.a \
          $(LIBDIR)/libhttp.a \
          $(LIBDIR)/libprotocol.a \
          $(LIBDIR)/libsock.a \
          $(LIBDIR)/libxmlserializer.a \
          $(LIBDIR)/libwql.a \
          $(LIBDIR)/libxml.a \
          $(LIBDIR)/libbase.a \
          $(LIBDIR)/libmicodec.a \
          $(LIBDIR)/libmofparser.a

include $(TOP)/mak/rules.mak

tests:
	$(call RUNUNITTEST)

##==============================================================================
##
## dep -- rule to build dependent libraries.
##
##==============================================================================
dep:
	( cd ../util; $(MAKE); )

reset:
	$(BINDIR)/nits -reset
