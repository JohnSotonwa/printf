#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>


int _putchar(char c);
int _printf (const char *format, ...);
int output_char(va_list arg);
int output_str(va_list arg);
//int (*_select_func(char c))(va_list);

#endif
