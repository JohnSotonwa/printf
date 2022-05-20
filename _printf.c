#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
* @_printf: print according to format specifiers %c & %s
* @format: input string
*
* Return: print characters
*/

int _printf (const char *format, ...)
{
    va_list arg;
    int i = 0, j = 0;
    char *str = NULL;

    va_start (arg, format);

    while (format[i] != '\0')
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
        }
        else
        {
		_select_func(format[i+1])(arg);
		i++;
<<<<<<< HEAD
	}
	if (format[i+1] == '%')
	{
=======
                str = va_arg(arg, char *);

                while(str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
                }
	    }
	    else if (format[i+1] == 'c')
	    {
		i++;
		_putchar(va_arg(arg, int));
		//i++;
	    }
	    else if (format[i+1] == '%')
	    {
>>>>>>> 55f8699608413734cf067dcae04da0765ae3600d
		i++;
		_putchar('%');
	}
        i++;
    }
    va_end (arg);
    return(0);
}

