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
* put_unsigned_hex_upper - Prints the uppercase hexadecimal
* representation of an unsigned integer.
* @args: A va_list containing the unsigned integer to
* be printed in uppercase hexadecimal.
*
* Return: The number of characters printed.
*/
int put_unsigned_hex_upper(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int charCount, i, j, remainder;
char buffer[20];

if (num == 0)
return (_putchar('0'));

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

/**
* print_non_printable_char - Prints a non-printable character in \x format.
* @c: The character to be printed.
* Return: character count
*/
int print_non_printable_char(char c)
{
int count;

count = 0;
_putchar('\\');
_putchar('x');
count += 2;
if (c < 16)
{
_putchar('0');
count++;
}
_putchar((c >> 4) + '0');
_putchar((c & 0xF) + '0');
count += 2;  
return(count);
}

/**
* print_string_with_non_printable - Prints a string
* with non-printable characters.
* @args: A va_list containing the string to be printed.
*
* Return: The number of characters printed.
*/
int print_string_with_non_printable(va_list args) 
{
char *str;
int count, j;

str = va_arg(args, char *);

count = 0;
for (j = 0; str[j] != '\0'; j++)
{
if (str[j] < 32 || str[j] >= 127)
{
count += print_non_printable_char(str[j]);
}
else
{
_putchar(str[j]);
count++;
}
}
return (count);
}
