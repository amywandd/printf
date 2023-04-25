#include <stddef.h>
#include "main.h"
/**
 * _check - function pointer
 * @format: parameter function
 * Return: null or character
 * struct func: structure
 *
 */
int (*_check(const char *format))(va_list)
{
int i;
func_t my_array[6] = {
	{"c", print_char},
	{"s", print_str},
	{"%", print_cent},
	{"i", print_int},
	{"d", print_dec},
	{NULL, NULL}};
for (i = 0; my_array[i].t != NULL; i++)
{
if (*(my_array[i].t) == *format)
{
return (my_array[i].f);
}
}
return (NULL);
}
