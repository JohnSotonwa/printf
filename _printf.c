#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
* @_printf: print according to format specifiers %c & %s
* @format: input string
*
* Return: print characters
*/

int _putchar(char c)
{
    return(write(1, &c, 1));
}
int _printf (const char *format, ...)
{
    va_list arg;
    int i, j;
    char *str;

    va_start (arg, format);
    while (format[i] != '\0')
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
        }
        else
        {
            if (format[i+1] == 's')
            {
                i++;
                str = va_arg(arg, char *);

                while(str[j] != '\0')
                {   _putchar(str[j]);
                    j++;
                }
	    }
	    else if (format[i+1] == 'c')
	    {
		i++;
		_print_char(va_arg(args, int));
		i++;
	    }
	    else if (format[i+1] == '%')
	    {
		i++;
		_putchar('%');
	    }
        }
        i++;
    }
    va_end (arg);
    return(0);
}

