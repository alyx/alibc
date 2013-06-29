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
#if defined(__GNUC__) || || defined(__clang__) || defined(_INTEL_COMPILER)
#warning stropts.h is deprecated and may be removed in the future.
#else
#pragma message("warning: stropts.h is deprecated and may be removed in the future.")
#endif

struct bandinfo
{
    int bi_flag;
    unsigned char bi_pri;
};

struct strbuf
{
    char *buf;
    int len;
    int maxlen;
};

struct strpeek
{
    struct strbuf ctlbuf;
    struct strbuf databuf;
    t_uscalar_t flags;
};

struct strfdinsert
{
    struct strbuf ctlbuf;
    struct strbuf databuf;
    int filedes;
    t_uscalar_t flags;
    int offset;
};

struct strioctl
{
    int ic_cmd;
    char *ic_dp;
    int ic_len;
    int ic_timeout;
};

struct strrecvfd
{
    int fd;
    gid_t gid;
    uid_t uid;
};

struct str_list
{
    struct str_mlist *sl_modlist;
    int sl_nmods;
};

struct str_mlist
{
    char l_name[FMNAMESZ+1];
};

