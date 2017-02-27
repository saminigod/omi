TOP = ../..
include $(TOP)/config.mak

CSHLIBRARY = mi

SOURCES = \
	../gnumain.c

INCLUDES = $(TOP) $(TOP)/common

DEFINES = MI_CONST= DETECT_FORBIDDEN_FUNCTIONS

LIBRARIES = miapi protocol sock wql base $(PALLIBS) omi_error wsman http xmlserializer xml micodec mofparser pal

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

nm:
	( nm -g $(TARGET)|grep -v U )
