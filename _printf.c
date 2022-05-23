#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 *
 * @handler - function that checks if % is found or not
 * @size: Number of Characters printed
 * @_strlen: Length of format to check if nothing was parsed
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
<<<<<<< HEAD
	int size;
	va_list args;
=======
    va_list arg;
    int i = 0;
>>>>>>> 920d21eca5e2c6bed72993ba867cefd0ff1b3580

	if (format == '\0')
		return (-1);

<<<<<<< HEAD
	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (size);
=======
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
	}
        i++;
    }
    va_end (arg);
    return(0);
>>>>>>> 920d21eca5e2c6bed72993ba867cefd0ff1b3580
}
