/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * $Id$
 *
 * Copyright (C) 2013 by Amaury Pouly
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef __TARGET_H__
#define __TARGET_H__

#include "protocol.h"

/* do target specific init */
void target_init(void);
/* get descriptor, set buffer to NULL on error */
void target_get_desc(int desc, void **buffer);
/* pack all descriptors for config desc */
void target_get_config_desc(void *buffer, int *size);
/* Wait a very short time (us<=1000) */
void target_udelay(int us);
/* Wait for a short time (ms <= 1000) */
void target_mdelay(int ms);

/* mandatory for all targets */
extern struct hwstub_target_desc_t target_descriptor;

#endif /* __TARGET_H__ */
