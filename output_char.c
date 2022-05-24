#include "main.h"
#include <stdarg.h>

int output_char(va_list arg)
{
	char c = va_arg(arg, int);
		return (_putchar(c));
}
