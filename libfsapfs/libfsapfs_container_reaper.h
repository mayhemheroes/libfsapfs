/*
 * The container reaper functions
 *
 * Copyright (C) 2018-2022, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFSAPFS_CONTAINER_REAPER_H )
#define _LIBFSAPFS_CONTAINER_REAPER_H

#include <common.h>
#include <types.h>

#include "libfsapfs_libbfio.h"
#include "libfsapfs_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libfsapfs_container_reaper libfsapfs_container_reaper_t;

struct libfsapfs_container_reaper
{
	/* Dummy
	 */
	int dummy;
};

int libfsapfs_container_reaper_initialize(
     libfsapfs_container_reaper_t **container_reaper,
     libcerror_error_t **error );

int libfsapfs_container_reaper_free(
     libfsapfs_container_reaper_t **container_reaper,
     libcerror_error_t **error );

int libfsapfs_container_reaper_read_file_io_handle(
     libfsapfs_container_reaper_t *container_reaper,
     libbfio_handle_t *file_io_handle,
     off64_t file_offset,
     libcerror_error_t **error );

int libfsapfs_container_reaper_read_data(
     libfsapfs_container_reaper_t *container_reaper,
     const uint8_t *data,
     size_t data_size,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFSAPFS_CONTAINER_REAPER_H ) */

