#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*check_specifiers(const char *))(va_list);

/**
 * struct func - struct for specifier to print
 * @t: character to compare
 * @f: function that handles the printing
 *
 * Description: struct for specifier to print
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);

} func_t;

int print_str(va_list);
int print_char(va_list);
int print_cent(va_list);


#endif
