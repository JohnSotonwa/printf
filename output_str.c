#include "main.h"
#include <stdarg.h>

int output_str(va_list arg)
{
	int j = 0;
	char *str = va_arg(arg, char *);

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	return (0);
}
