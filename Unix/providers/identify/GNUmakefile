TOP = ../..
include $(TOP)/config.mak

CSHLIBRARY = omiidentify

DEFINES = HOOK_BUILD

SOURCES = Identify.c module.c schema.c

INCLUDES = $(TOP) $(TOP)/common

LIBRARIES = mi omi_error wsman xmlserializer http protocol sock provmgr wql base pal


DEPLIBS = $(LIBDIR)/libmi.$(SHLIB_EXT) \
          $(LIBDIR)/libomi_error.a \
          $(LIBDIR)/libwsman.a \
          $(LIBDIR)/libhttp.a \
          $(LIBDIR)/libxmlserializer.a \
          $(LIBDIR)/libprotocol.a \
          $(LIBDIR)/libsock.a \
          $(LIBDIR)/libprovmgr.a \
          $(LIBDIR)/libwql.a \
          $(LIBDIR)/libbase.a \
          $(LIBDIR)/libpal.a

include $(TOP)/mak/rules.mak

gen:
	$(BINDIR)/omigen schema.mof OMI_Identify=Identify

REGFILE=$(CSHLIBRARY).reg

reg:
	$(BINDIR)/omireg $(TARGET)
	cp $(REGFILE) "$(CONFIG_SYSCONFDIR)/omiregister/root-omi/$(REGFILE)"

unreg:
	rm -f $(REGFILE) "$(CONFIG_SYSCONFDIR)/omiregister/root-omi/$(REGFILE)"

ei:
	$(BINDIR)/omicli ei root/omi OMI_Identify

gi:
	$(BINDIR)/omicli gi root/omi { OMI_Identify InstanceID "2FDB5542-5896-45D5-9BE9-DC04430AAABE" }
