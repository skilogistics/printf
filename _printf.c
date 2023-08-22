#include "main.h"
#include <stdio.h>

/**
* print_char - Prints a character and increments the count.
* @args: Variable argument list containing
* the character to be printed.
* Return: Updated count of characters printed.
*/
int print_char(va_list args)
{
char c;

c = va_arg(args, int);
_putchar(c);
return (1);
}


/**
* print_string - Prints a string and increments the count.
* @args: Variable argument list containing
* the string to be printed.
* Return: Updated count of characters printed.
*/
int print_string(va_list args)
{
char *s;
int count;

s = va_arg(args, char *);
if (s == NULL)
s = "(null)";
for (count = 0; s[count] != '\0'; count++)
{
_putchar(s[count]);
}
return (count);
}

/**
* print_number - Prints an integer using putchar
* @args: Variable argument list containing
* Return: Updated count of characters printed.
*/
int print_number(va_list args)
{
unsigned int divisor;
unsigned int num;
int count;

num = va_arg(args, unsigned int);
count = 0;
if ((signed int)num < 0)
{
num = -num;
_putchar('-');
count++;
}
divisor = 1;

while (num / divisor > 9)
divisor *= 10;

while ((signed int)divisor > 0)
{
_putchar('0' + num / divisor);
num %= divisor;
divisor /= 10;
count++;
}
return (count);
}

/**
* _printf - printf string according to format specified
* @format: The format string specifying the
* types of arguments to be printed.
* Return: the number of characters printed
* (excluding the null byte used to end output to strings)
*/
int _printf(const char *format, ...)
{
va_list args;
int i, count;
int (*func)(va_list);

count = 0;
va_start(args, format);
if (format == NULL)
	return (-1);
for (i = 0; format[i] && format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
func = get_print_func(format[i]);
if (func)
{
count += func(args);
}
else if (!func && format[i] != '\0')
{
_putchar('%');
_putchar(format[i]);
count += 2;
}
else
{
return (-1);
}
}
else
{
_putchar(format[i]);
count++;
}
}
va_end(args);
return (count);
}
