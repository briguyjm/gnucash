/********************************************************************
 * gnc-engine.h  -- top-level include file for Gnucash Engine       *
 * Copyright 2000 Bill Gribble <grib@billgribble.com>               *
 *                                                                  *
 * This program is free software; you can redistribute it and/or    *
 * modify it under the terms of the GNU General Public License as   *
 * published by the Free Software Foundation; either version 2 of   *
 * the License, or (at your option) any later version.              *
 *                                                                  *
 * This program is distributed in the hope that it will be useful,  *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of   *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    *
 * GNU General Public License for more details.                     *
 *                                                                  *
 * You should have received a copy of the GNU General Public License*
 * along with this program; if not, contact:                        *
 *                                                                  *
 * Free Software Foundation           Voice:  +1-617-542-5942       *
 * 59 Temple Place - Suite 330        Fax:    +1-617-542-2652       *
 * Boston, MA  02111-1307,  USA       gnu@gnu.org                   *
 *                                                                  *
 ********************************************************************/

#ifndef __GNC_ENGINE_H__
#define __GNC_ENGINE_H__

#include "gnc-commodity.h"

typedef void (* gnc_engine_init_hook_t)(int, char **);

/** PROTOTYPES ******************************************************/

/* gnc_engine_init MUST be called before gnc engine functions can 
 * be used. */
void gnc_engine_init(int argc, char ** argv);

/* pass a function pointer to gnc_engine_add_init_hook and 
 * it will be called during the evaluation of gnc_engine_init */
void gnc_engine_add_init_hook(gnc_engine_init_hook_t hook);

/* this is a global table of known commodity types. */
gnc_commodity_table * gnc_engine_commodities(void);

#endif
