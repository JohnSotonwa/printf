#include "main.h"
#include <stdarg.h>
/**
 * print_string - Print string
 * @args: va list.
 *
 * Return: 0.
 */

int output_str(va_list args)
{
	int j = 0;
	char *str = va_arg(args, char *);

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	return (0);
}
