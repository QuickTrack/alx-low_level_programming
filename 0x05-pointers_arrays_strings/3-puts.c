#include "main.h"
/**
 * _puts - print string, followed by a new line, to stdout
 * @str Description: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

