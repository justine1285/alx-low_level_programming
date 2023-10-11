#ifndef _FUNCTION_POINTER_
#define _FUNCTION_POINTER_

#include <stddef.h>

void print_name(char *name, void (*f)(char *));

#endif
