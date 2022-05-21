#include <stdarg.h>
#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
   va_list ap; /* points to each unnamed arg in turn */
   char *p, *sval;
   int ival;
   double dval;
   va_start(ap, format); /* make ap point to 1st unnamed arg */
   for (p = format; *p; p++)
   {
      if (*p != '%')
      {
         _putchar(*p);
         continue;
      }
      switch (*++p)
      {
         case 'd':
            ival = va_arg(ap, int);
            printf("%d", ival);
            break;
        case 'f':
            dval = va_arg(ap, double);
            printf("%f", dval);
            break;
        case 's':
            for (sval = va_arg(ap, char *); *sval; sval++)
            _putchar(*sval);
            break;
        case 'c':
            ival = va_arg(ap, int);
            printf("%c", ival);
            break;
        default:
            _putchar(*p);
            break;
      }
   }
   va_end(ap); /* clean up when done */
}
