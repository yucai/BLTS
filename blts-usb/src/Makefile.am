# Makefile.am - Automake script for blts-usb-tests
#
#  Copyright (C) 2000-2010, Nokia Corporation.
#
#  This program is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, version 2.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program.  If not, see <http://www.gnu.org/licenses/>.

AM_CFLAGS = \
	-O3 -g -Wall -Wextra -std=gnu99 -I$(includedir) \
	$(BLTS_COMMON_CFLAGS) -I.. -fPIC

requiredlibs = -lm -lrt

h_sources = \
	usb-util.h \
	usb-general.h \
	transfer-cases.h \
	peripheral-control.h \
	../common/gadgetdrv_common.h \
	../common/hostdrv_common.h \
	../common/usbdrv_common.h

c_sources = \
	blts-usb-testrunner.c \
	transfer-cases.c \
	peripheral-control.c

config_DATA = \
	blts-usb-testrunner-default.cnf \
	blts-usb-testrunner-bulk.cnf \
	blts-usb-testrunner-isoc.cnf \
	blts-usb-testrunner-int.cnf \
	ep-configuration-default.cfg \
	ep-configuration-bulk.cfg \
	ep-configuration-isoc.cfg \
	ep-configuration-int.cfg

bin_PROGRAMS = blts-usb-tests

blts_usb_tests_SOURCES = $(h_sources) $(c_sources)
blts_usb_tests_CFLAGS = \
	$(AM_CFLAGS) $(BLTS_COMMON_CFLAGS)
blts_usb_tests_LDADD = \
	$(requiredlibs) $(BLTS_COMMON_LIBS)

EXTRA_DIST = \
	$(config_DATA)


