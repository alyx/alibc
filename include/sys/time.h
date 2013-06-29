#pragma once
#include "time.h"
#include "stdint.h"

struct timeval
{
	time_t tv_sec;
	suseconds_t tv_usec;
};

struct timezone
{
	int tz_minuteswest;     /* minutes west of Greenwich */
	int tz_dsttime;         /* type of DST correction */
};

inline int gettimeofday(struct timeval *tv, struct timezone *tz)
{
	
}

inline int settimeofday(const struct timeval *tv, const struct timezone *tz)
{
	
}