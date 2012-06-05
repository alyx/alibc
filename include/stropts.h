
#ifndef _STROPTS_H_
#define _STROPTS_H_

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

#endif