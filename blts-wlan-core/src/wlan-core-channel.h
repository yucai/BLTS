/* wlan-core-channel.h -- WLAN core channel functions

   Copyright (C) 2000-2010, Nokia Corporation.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, version 2.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CHANNEL_H_
#define CHANNEL_H_

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include <getopt.h>			/* getopt_long() */

#include <fcntl.h>			/* low-level i/o */
#include <unistd.h>
#include <errno.h>
#include <malloc.h>
#include <sys/stat.h>

#include "wlan-core-definitions.h"

struct nl80211_channel {
	char *phyname;
	int nfreqs;
	int *channel_list;
	int set_ch_support;
};

typedef struct nl80211_channel nl80211_channel_t;

int nl80211_get_channel_list(wlan_core_data* data, int *ret_num_channels, int **ret_channel_list, int* set_ch_support);

int nl80211_set_channel(wlan_core_data* data, int channel, unsigned int chmode, int set_ch_support);

#endif /*CHANNEL_H_*/
