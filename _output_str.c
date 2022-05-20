#include "main.h"
#include <stdarg.h>

int _output_str(va_list arg)
{
	int j = 0;
	char *str = va_args(arg, char *);

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		k++;
	}
	return (0);
}
