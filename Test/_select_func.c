#include "main.h"
#include <stddef.h>

int (*_select_func(char c))(va_list)
{
	if (c == 'c')
		return (_output_char);

	if (c == 's')
		return (_output_str);

	if (c == '%')
		return (_output_percent);
	return (NULL);
}
