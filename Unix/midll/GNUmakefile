TOP = ..
include $(TOP)/config.mak

GENERATE_ORIGIN=0
ifeq ($(OS),LINUX)
  GENERATE_ORIGIN=1
endif
ifeq ($(OS),DARWIN)
  GENERATE_ORIGIN=1
endif

ifeq ($(GENERATE_ORIGIN),1)
	DIRECTORIES = release origin
else 
	DIRECTORIES = release
endif

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

include $(ROOT)/mak/rules.mak
