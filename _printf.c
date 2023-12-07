#include "main.h"
/**
 * _printf - Customized printf function
 * @format: Format specifier
 * Return: The string length
 */
int _printf(const char *format, ...)
{
    int cha_print = 0;
    va_list list_of_args;
	va_start(list_of_args,format);
    if(format == NULL)
    {
        return(-1);
    }
    while(*format != '\0')
    {
        if(*format == '%')
        {
	format++;
        cha_print += ab_c(format , list_of_args);
	} 
   else
   {
   cha_print += write(1, &(*format), 1);
   format++;
   }
   va_end (list_of_args);
    }
    return(cha_print);
}


