#include "main.h"

/**
* @_printf: print according to format specifiers %c & %s
* @format: input string
*
* Return: print characters
*/

int _printf (const char *format, ...)
{
	va_list args;
	int i, count;
	count = 0;
	if (format == NULL)
	return (-1);
	
	va_start (args, format);
	
	while (format[i] != '\0')
	{
        	if (format[i] != '%')
        	{
            		_putchar(format[i]);
        	}
        else
        {
		 if (format[i+1] == 'c')
		 {
			 i++;
			 output_char(args);
			 count += 1;
		 }
		 else if (format[i+1] == 's')
		 {
			 i++;
			 output_str(args);
			 count += 1;
		 }
		 /*else if (format[i+1] == 'd')
		  * {
		  * i++;
		  * output_int(args);
		  * count += 1;
		  * }*/
		 else if (format[i+1] == '%')
		 {
			 i++;
			 _putchar('%');
			 count += 1;
		 }
	}
	i++;
	}
	va_end (args);
	return(count);
}
