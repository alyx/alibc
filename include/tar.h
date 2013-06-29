/*
 * Copyright (c) 2012 - 2013, Alyx Wolcott <contact@alyxw.me>
 * Copyright (c) 2012 - 2013, Justin Crawford <Justasic@gmail.com>
 * 
 * Permission to use, copy, modify, and/or distribute this software for any purpose
 * with or without fee is hereby granted, provided that the above copyright notice 
 * and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD TO
 * THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER
 * IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */
#pragma once

#define TMAGIC     {'u','s','t','a','r','\0'}
#define TMAGLEN    6
#define TVERSION   {'0', '0'}
#define TVERSLEN   2

#define REGTYPE    0
#define AREGTYPE   '\0'
#define LNKTYPE    1
#define SYMLINK    2
#define CHRTYPE    3
#define BLKTYPE    4
#define DIRTYPE    5
#define FIFOTYPE   6
#define CONTTYPE   7

#define TSUID      04000
#define TSGID      02000
#define TSVTX      01000
#define TUREAD     00400
#define TUWRITE    00200
#define TUEXEC     00100
#define TGREAD     00040
#define TGWRITE    00020
#define TGEXEC     00010
#define TOREAD     00004
#define TOWRITE    00002
#define TOEXEC     00001
