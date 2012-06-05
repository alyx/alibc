#pragma once

struct passwd
{
    char *pw_name;
    uid_t pw_uid;
    gid_t pw_gid;
    char *pw_dir;
    char *pw_shell;
};

extern void endpwent(void);
extern struct passwd *getpwent(void);
extern struct passwd *getpwnam(const char *name);
extern int getpwnam_r(const char *nam, struct passwd *pwd, char *buffer,
        size_t bufsize, struct passwd **result);
extern struct passwd *getpwuid(uid_t uid);
extern int getpwuid_r(uid_t uid, struct passwd *pwd, char *buffer,
        size_t bufsize, struct passwd **result);
extern void setpwent(void);
