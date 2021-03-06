/*
 * This file is part of Cockpit.
 *
 * Copyright (C) 2013 Red Hat, Inc.
 *
 * Cockpit is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * Cockpit is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Cockpit; If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __SERVICES_H__
#define __SERVICES_H__

#include "types.h"

G_BEGIN_DECLS

#define TYPE_SERVICES   (services_get_type ())
#define SERVICES(o)     (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_SERVICES, Services))
#define IS_SERVICES(o)  (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_SERVICES))

GType              services_get_type          (void) G_GNUC_CONST;

CockpitServices *  services_new               (Daemon *daemon);

Daemon *           services_get_daemon        (Services *realms);

G_END_DECLS

#endif /* __SERVICES_H__ */
