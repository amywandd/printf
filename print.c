#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - produces an output acoording to a format
 * @format: parameter function
 * Return: count
 */
int _printf(const char *format, ...)
{
int (*f)(va_list);
int i = 0;
int count = 0;
int temp = 0;
va_list(args);
va_start(args, format);
if (format == NULL)
return (-1);
while (format[i])
{
if (format[i] != '%')
{
temp = write(1, &format[i], 1);
count = count + temp;
i++;
continue;
}
if (format[i] == '%')
{
f = _check(&format[i + 1]);
if (f != NULL)
{
temp = f(args);
count = count + temp;
i = i + 2;
continue;
}
if (format[i + 1] == '\0')
break;
if (format[i + 1] != '\0')
{
temp = write(1, &format[i + 1], 1);
count = count + temp;
i = i + 2;
continue;
}
}
}
return (count);
}
