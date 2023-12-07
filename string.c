#include <stdlib.h>
#include <unistd.h>
/**
 * _print_string - To print string
 * @str: A pointer to string
 * Return: Value
 */
int _print_string(const char *str)
{
	const char *null_strings = "(null)";
	int cha_print = 0;
	int val;

	if (str == NULL)
	{
	str = null_strings;
	}
	while (*str != '\0')
	{
	val = write(1, str++, 1);
	if (val == -1)
	{
	return (-1);
	}
	cha_print += val;
	}
	if (val == -1)
	{
	return (-1);
	}
	cha_print += val;
	return (cha_print - 1);
}
