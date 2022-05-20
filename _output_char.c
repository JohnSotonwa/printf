#include "main.h"
#include <stdarg.h>

int _output_char(va_list arg)
{
	char c = va_args(arg, int);
		return (_putchar(c));
}
