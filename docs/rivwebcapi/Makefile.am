## Makefile.am
##
## docs/rivwebcapi/Makefile.am for Rivendell C API
##
## (C) Copyright 2015-2018 Fred Gleason <fredg@paravelsystems.com>
##
##   This program is free software; you can redistribute it and/or modify
##   it under the terms of the GNU General Public License version 2 as
##   published by the Free Software Foundation.
##
##   This program is distributed in the hope that it will be useful,
##   but WITHOUT ANY WARRANTY; without even the implied warranty of
##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
##   GNU General Public License for more details.
##
##   You should have received a copy of the GNU General Public
##   License along with this program; if not, write to the Free Software
##   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
##
## Use automake to process this into a Makefile.in

##
## Build Dependencies
##
%.html:	%.xml
	xsltproc -o $@ $(DOCBOOK_STYLESHEETS)/xhtml/docbook.xsl $<

%.pdf:	%.xml
	xsltproc $(DOCBOOK_STYLESHEETS)/fo/docbook.xsl $< | fop - -pdf $@

%.7:	%.xml
	xsltproc $(DOCBOOK_STYLESHEETS)/manpages/docbook.xsl $<

all-local:	rd_addcart.html\
                rd_addcart.pdf\
                rd_addcart.xml\
                rd_addcut.html\
                rd_addcut.pdf\
                rd_addcut.xml\
                rd_addlog.html\
                rd_addlog.pdf\
                rd_addlog.xml\
                rd_assignschedcode.html\
                rd_assignschedcode.pdf\
                rd_assignschedcode.xml\
                rd_audioinfo.html\
                rd_audioinfo.pdf\
                rd_audioinfo.xml\
                rd_audiostore.html\
                rd_audiostore.pdf\
                rd_audiostore.xml\
                clibsummary.xml\
                clibsummary.html\
                clibsummary.pdf\
                rd_copyaudio.html\
                rd_copyaudio.pdf\
                rd_copyaudio.xml\
		rd_createticket.html\
		rd_createticket.pdf\
		rd_createticket.xml\
                rd_deleteaudio.html\
                rd_deleteaudio.pdf\
                rd_deleteaudio.xml\
                rd_deletelog.html\
                rd_deletelog.pdf\
                rd_deletelog.xml\
                rd_editcart.html\
                rd_editcart.pdf\
                rd_editcart.xml\
                rd_editcut.html\
                rd_editcut.pdf\
                rd_editcut.xml\
                rd_exportpeaks.html\
                rd_exportpeaks.pdf\
                rd_exportpeaks.xml\
                rd_export.html\
                rd_export.pdf\
                rd_export.xml\
                rd_getuseragent.html\
                rd_getuseragent.pdf\
                rd_getuseragent.xml\
                rd_getversion.html\
                rd_getversion.pdf\
                rd_getversion.xml\
                rd_import.html\
                rd_import.pdf\
                rd_import.xml\
                rd_listcartschedcodes.html\
                rd_listcartschedcodes.pdf\
                rd_listcartschedcodes.xml\
                rd_listcart.html\
                rd_listcart.pdf\
                rd_listcart.xml\
                rd_listcartcuts.html\
                rd_listcartcuts.pdf\
                rd_listcartcuts.xml\
                rd_listcarts.html\
                rd_listcarts.pdf\
                rd_listcarts.xml\
                rd_listcartscuts.html\
                rd_listcartscuts.pdf\
                rd_listcartscuts.xml\
                rd_listcuts.html\
                rd_listcuts.pdf\
                rd_listcuts.xml\
                rd_listcut.html\
                rd_listcut.pdf\
                rd_listcut.xml\
                rd_listgroups.html\
                rd_listgroups.pdf\
                rd_listgroups.xml\
                rd_listgroup.html\
                rd_listgroup.pdf\
                rd_listgroup.xml\
                rd_listlogs.html\
                rd_listlogs.pdf\
                rd_listlogs.xml\
                rd_listlog.html\
                rd_listlog.pdf\
                rd_listlog.xml\
                rd_listschedcodes.html\
                rd_listschedcodes.pdf\
                rd_listschedcodes.xml\
                rd_listservices.html\
                rd_listservices.pdf\
                rd_listservices.xml\
                rd_listsystemsettings.html\
                rd_listsystemsettings.pdf\
                rd_listsystemsettings.xml\
                rd_removecart.html\
                rd_removecart.pdf\
                rd_removecart.xml\
                rd_removecut.html\
                rd_removecut.pdf\
                rd_removecut.xml\
                rd_savelog.html\
                rd_savelog.pdf\
                rd_savelog.xml\
                rd_trimaudio.html\
                rd_trimaudio.pdf\
                rd_trimaudio.xml\
                rd_unassignschedcode.html\
                rd_unassignschedcode.pdf\
                rd_unassignschedcode.xml

man_MANS = rd_addcart.7\
           rd_addcut.7\
           rd_addlog.7\
           rd_assignschedcode.7\
           rd_audioinfo.7\
           rd_audiostore.7\
           rd_copyaudio.7\
           rd_createticket.7\
           rd_deleteaudio.7\
           rd_deletelog.7\
           rd_editcart.7\
           rd_editcut.7\
           rd_exportpeaks.7\
           rd_export.7\
           rd_getuseragent.7\
           rd_getversion.7\
           rd_import.7\
           rd_listcartschedcodes.7\
           rd_listcart.7\
           rd_listcartcuts.7\
           rd_listcarts.7\
           rd_listcartscuts.7\
           rd_listcuts.7\
           rd_listcut.7\
           rd_listgroups.7\
           rd_listgroup.7\
           rd_listlogs.7\
           rd_listlog.7\
           rd_listschedcodes.7\
           rd_listservices.7\
           rd_listsystemsettings.7\
           rd_removecart.7\
           rd_removecut.7\
           rd_savelog.7\
           rd_trimaudio.7\
           rd_unassignschedcode.7

EXTRA_DIST = rd_addcart.7\
             rd_addcart.html\
             rd_addcart.pdf\
             rd_addcart.xml\
             rd_addcut.7\
             rd_addcut.html\
             rd_addcut.pdf\
             rd_addcut.xml\
             rd_addlog.7\
             rd_addlog.html\
             rd_addlog.pdf\
             rd_addlog.xml\
             rd_assignschedcode.7\
             rd_assignschedcode.html\
             rd_assignschedcode.pdf\
             rd_assignschedcode.xml\
             rd_audioinfo.7\
             rd_audioinfo.html\
             rd_audioinfo.pdf\
             rd_audioinfo.xml\
             rd_audiostore.7\
             rd_audiostore.html\
             rd_audiostore.pdf\
             rd_audiostore.xml\
             clibsummary.xml\
             clibsummary.html\
             clibsummary.pdf\
             rd_copyaudio.7\
             rd_copyaudio.html\
             rd_copyaudio.pdf\
             rd_copyaudio.xml\
	     rd_createticket.html\
	     rd_createticket.pdf\
	     rd_createticket.xml\
             rd_deleteaudio.7\
             rd_deleteaudio.html\
             rd_deleteaudio.pdf\
             rd_deleteaudio.xml\
             rd_deletelog.7\
             rd_deletelog.html\
             rd_deletelog.pdf\
             rd_deletelog.xml\
             rd_editcart.7\
             rd_editcart.html\
             rd_editcart.pdf\
             rd_editcart.xml\
             rd_editcut.7\
             rd_editcut.html\
             rd_editcut.pdf\
             rd_editcut.xml\
             rd_exportpeaks.7\
             rd_exportpeaks.html\
             rd_exportpeaks.pdf\
             rd_exportpeaks.xml\
             rd_export.7\
             rd_export.html\
             rd_export.pdf\
             rd_export.xml\
             rd_getuseragent.7\
             rd_getuseragent.html\
             rd_getuseragent.pdf\
             rd_getuseragent.xml\
             rd_getversion.7\
             rd_getversion.html\
             rd_getversion.pdf\
             rd_getversion.xml\
             rd_import.7\
             rd_import.html\
             rd_import.pdf\
             rd_import.xml\
             rd_listcartschedcodes.7\
             rd_listcartschedcodes.html\
             rd_listcartschedcodes.pdf\
             rd_listcartschedcodes.xml\
             rd_listcart.7\
             rd_listcart.html\
             rd_listcart.pdf\
             rd_listcart.xml\
             rd_listcartcuts.7\
             rd_listcartcuts.html\
             rd_listcartcuts.pdf\
             rd_listcartcuts.xml\
             rd_listcarts.7\
             rd_listcarts.html\
             rd_listcarts.pdf\
             rd_listcarts.xml\
             rd_listcartscuts.7\
             rd_listcartscuts.html\
             rd_listcartscuts.pdf\
             rd_listcartscuts.xml\
             rd_listcart.xml\
             rd_listcuts.7\
             rd_listcuts.html\
             rd_listcuts.pdf\
             rd_listcuts.xml\
             rd_listcut.7\
             rd_listcut.html\
             rd_listcut.pdf\
             rd_listcut.xml\
             rd_listgroups.7\
             rd_listgroups.html\
             rd_listgroups.pdf\
             rd_listgroups.xml\
             rd_listgroup.7\
             rd_listgroup.html\
             rd_listgroup.pdf\
             rd_listgroup.xml\
             rd_listlogs.7\
             rd_listlogs.html\
             rd_listlogs.pdf\
             rd_listlogs.xml\
             rd_listlog.7\
             rd_listlog.html\
             rd_listlog.pdf\
             rd_listlog.xml\
             rd_listschedcodes.7\
             rd_listschedcodes.html\
             rd_listschedcodes.pdf\
             rd_listschedcodes.xml\
             rd_listservices.7\
             rd_listservices.html\
             rd_listservices.pdf\
             rd_listservices.xml\
             rd_listsystemsettings.7\
             rd_listsystemsettings.html\
             rd_listsystemsettings.pdf\
             rd_listsystemsettings.xml\
             rd_removecart.7\
             rd_removecart.html\
             rd_removecart.pdf\
             rd_removecart.xml\
             rd_removecut.7\
             rd_removecut.html\
             rd_removecut.pdf\
             rd_removecut.xml\
             rd_savelog.7\
             rd_savelog.html\
             rd_savelog.pdf\
             rd_savelog.xml\
             rd_trimaudio.7\
             rd_trimaudio.html\
             rd_trimaudio.pdf\
             rd_trimaudio.xml\
             rd_unassignschedcode.7\
             rd_unassignschedcode.html\
             rd_unassignschedcode.pdf\
             rd_unassignschedcode.xml

CLEANFILES = *~
MAINTAINERCLEANFILES = *~\
                       *.7\
                       *.html\
                       *.pdf\
                       aclocal.m4\
                       configure\
                       Makefile.in
