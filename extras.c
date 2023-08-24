#include "main.h"

/**
 * print_percent - Prints the character '%' using putchar
 * @args: Variable argument list (unused)
 * Return: Updated count of characters printed.
 */
int print_percent(va_list args)
{
(void)args;
_putchar('%');
return (1);
}

/**
 * print_else - Prints a character followed by '%'
 * @args: Variable argument list containing the character to be printed
 * Return: Updated count of characters printed.
 */
int print_else(va_list args)
{
char c;

c = va_arg(args, int);
_putchar('%');
_putchar(c);
return (2);
}

/**
 * put_unsigned_hex_upper - Prints the uppercase hexadecimal representation of an unsigned integer.
 * @args: A va_list containing the unsigned integer to be printed in uppercase hexadecimal.
 *
 * Return: The number of characters printed.
 */
int put_unsigned_hex_upper(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int charCount, i, j, remainder;
char buffer[20];

if (num == 0)
return _putchar('0');

i = 0;

while (num > 0)
{
remainder = num % 16;
if (remainder < 10)
{
buffer[i++] = remainder + '0';
}
else
{
buffer[i++] = remainder - 10 + 'A';
}
num /= 16;
}

charCount = 0;
for (j = i - 1; j >= 0; j--)
charCount += _putchar(buffer[j]);
return (charCount);
}
