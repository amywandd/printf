#include "main.h"
#include <unistd.h>
/**
 * print_cent - prints a character to stdout
 * @args: variadic parameter
 * Return: number of characters printed
 */
int print_cent(va_list args)
{
(void)args;
write(1, "%", 1);
return (1);
}
