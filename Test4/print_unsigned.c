#include "main.h"

/**
 * print_unsigned - Print a unsigned int
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_unsigned(va_list list)
{
	char *p_buff;
	int size;

	p_buff = int_to_string(va_arg(list, unsigned int), 10);

	size = print((p_buff != '\0') ? p_buff : "NULL");

	return (size);
}
