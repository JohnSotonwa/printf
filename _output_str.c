#include "main.h"
#include <stdarg.h>

int _output_str(va_list arg)
{
	int j = 0;
	char *str = va_args(arg, char *);

	while (str[j] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	return (0);
}
