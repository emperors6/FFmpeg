/*
 * SubRip subtitle muxer
 * Copyright (c) 2012  Nicolas George <nicolas.george@normalesup.org>
 *
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include "avformat.h"
#include "internal.h"
#include "libavutil/log.h"
#include "libavutil/intreadwrite.h"

AVOutputFormat ff_pdr_muxer = {
    .name           = "pdr",
    .long_name      = NULL_IF_CONFIG_SMALL("Marlin PDR"),
    .mime_type      = "application/x-marlin-pdr",
    .extensions     = "pds",
    .priv_data_size = 0, 
    .write_header   = 0,
    .write_packet   = 0,
    .flags          = AVFMT_VARIABLE_FPS | AVFMT_TS_NONSTRICT,
    .subtitle_codec = AV_CODEC_ID_PDR,
};
