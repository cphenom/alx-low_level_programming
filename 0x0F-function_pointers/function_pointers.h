#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char);
void print_name(char *name, void (*f)(char *));

#endif /* _FUNCTION_POINTERS_H_ */
