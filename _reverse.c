#include "main.h"

/**
* print_reverse - Prints a string in reverse order using putchar
* @args: Variable argument list containing additional arguments
* Return: Updated count of characters printed.
*/
int print_reverse(va_list args)
{
char *input = va_arg(args, char *);
int i, length, count;

length = _strlen(input);
count = 0;

for (i = length - 1; i >= 0; i--)
{
_putchar(input[i]);
count++;
}

return (count);
}

/**
* _strlen - calculates length of a string
* @s: pointer to string
*
* Return: int length
*/
int _strlen(char *s)
{
int length;

length = 0;
while (s[length] != '\0')
length++;
return (length);
}
