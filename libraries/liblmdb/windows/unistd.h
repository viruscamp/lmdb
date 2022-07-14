#ifndef _UNISTD_H
#define _UNISTD_H

#include <io.h>
#include <process.h>

#include <getopt.h>

#ifdef _WIN64
#define ssize_t __int64
#else
#define ssize_t long
#endif

#endif /* _UNISTD_H */
