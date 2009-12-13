/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8-*- */
/*
 * FreetuxTV is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or 
 * (at your option) any later version.
 *
 * FreetuxTV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Glade; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef FREETUXTV_FILEUTILS_H
#define FREETUXTV_FILEUTILS_H

#include <glib.h>

#define FREETUXTV_CURL_ERROR freetuxtv_curl_error_quark ()
typedef enum
{
	FREETUXTV_CURL_ERROR_GET,
} FreetuxTVCurlError;

GQuark
freetuxtv_curl_error_quark ();

void
freetuxtv_fileutils_get_file (gchar* url, gchar* dst_file, GError **error);

#endif /* FREETUXTV_FILEUTILS_H */
