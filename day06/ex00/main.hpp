#ifndef MAIN
#define MAIN

#include <iostream>
#include <cstring>
#include <limits.h>
#include <float.h>
#include <math.h>


bool    is_float(char *num);
bool    is_number(char *num);
bool    is_number_d(char *num);
bool    isInfd(char *num);
bool    isInff(char *num);
bool    is_double(char *num);
bool    is_int(char *num);
void    from_char(char c);
void    from_float(char *fl);
void from_double(char *dl);
void    from_int(char *num);
void    from_nan();

#endif
