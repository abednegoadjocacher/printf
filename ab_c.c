#include "main.h"
/**
 * ab_c - My testing file
 * @format: The format checking
 * @list_of_args: List of the arguments
 * Return: Value
 */
int ab_c(const char *format, va_list list_of_args)
{
int cha_print = 0;
switch (*format)
{
	case 'c':
	cha_print += _putchar(va_arg(list_of_args, int));
	break;
	case 's':
	cha_print += _print_string(va_arg(list_of_args, char *));
	break;
	case '%':
	cha_print += _putchar('%');
	break;
	case '\0':
	return (-1);
	default:
	cha_print += _putchar('%');
	cha_print += write(1, &(*format), 1);
		break;
	}
	return (cha_print);
}
