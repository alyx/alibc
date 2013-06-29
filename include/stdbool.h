#pragma once

#ifndef bool

#ifdef _Bool
# define bool _Bool
# define true 1
# define false 0
# define __bool_true_false_are_defined 1
#else
typedef char bool;
enum {false, true};
#endif

#endif // ifndef bool