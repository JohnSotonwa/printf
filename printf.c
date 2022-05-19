#include <stdarg.h>
#include <unistd.h>

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
        }
        i++;
    }
    va_end (arg);
}

