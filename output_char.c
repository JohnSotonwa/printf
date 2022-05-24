#include "main.h"
#include <stdarg.h>
/**
 * print_char - print char.
 * @args: va_list.
 *
 * Return: 1
 */
 
int output_char(va_list args)
{
char c = va_arg(args, int);
return (_putchar(c));
}
