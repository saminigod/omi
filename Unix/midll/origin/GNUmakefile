TOP = ../..
include $(TOP)/config.mak

CSHLIBRARY = mi_origin

SOURCES = \
	../gnumain.c

INCLUDES = $(TOP) $(TOP)/common

DEFINES = MI_CONST= DETECT_FORBIDDEN_FUNCTIONS
LIBRARIES = miapi protocol sock wql base omi_error wsman http $(PALLIBS) xmlserializer xml micodec mofparser

DEPLIBS=$(LIBDIR)/libmiapi.a \
        $(LIBDIR)/libprotocol.a \
        $(LIBDIR)/libsock.a \
        $(LIBDIR)/libwql.a \
        $(LIBDIR)/libbase.a \
        $(LIBDIR)/libomi_error.a \
        $(LIBDIR)/libwsman.a \
        $(LIBDIR)/libhttp.a \
        $(LIBDIR)/libxmlserializer.a \
        $(LIBDIR)/libxml.a \
        $(LIBDIR)/libmicodec.a \
        $(LIBDIR)/libmofparser.a \
        $(LIBDIR)/libpal.a

EXPORTS=../libmi.exp

include $(TOP)/mak/rules.mak

# Setting this after rules as we are overriding the default one we use
ifeq ($(OS),DARWIN)
LIBNAMEOPT=$(shell $(BUILDTOOL) libname @rpath/$(shell $(BUILDTOOL) shlibname mi))
else
LIBPATHFLAGS = $(shell $(BUILDTOOL) libpath \'\$$ORIGIN\' )
endif

nm:
	( nm -g $(TARGET)|grep -v U )
