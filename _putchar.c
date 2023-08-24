#include <unistd.h>
#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* _puts - Prints a string to the standard output.
* @str: The string to be printed.
*
* Return: The number of characters printed.
*/
int _puts(const char *str)
{
int i, charCount;

charCount = 0;
for (i = 0; str[i] != '\0'; i++)
charCount += _putchar(str[i]);
return (charCount);
}

/**
* _put_unsigned - Prints an unsigned integer to the standard output.
* @num: The unsigned integer to be printed.
*
* Return: The number of characters printed.
*/
int _put_unsigned(va_list args)
{
int charCount, num;
char *buffer;

num = va_arg(args, unsigned int);
if (num == 0)
return (_putchar('0'));
buffer = itoa(num, 10);
charCount = _puts((buffer != NULL) ? buffer : "NULL");
return (charCount);
}

int _put_octal(va_list args)
{
char buffer[20];
int i, j, charCount, num;

num = va_arg(args, unsigned int);
if (num == 0)
return (_putchar('0'));
i = 0;
while (num > 0)
{
buffer[i++] = (num % 8) + '0';
num /= 8;
}

charCount = 0;
for (j = i - 1; (signed int) j > 0; j--)
charCount += _putchar(buffer[j]);

return (charCount);
}

/**
* put_unsigned_hex - Prints the hexadecimal
* representation of an unsigned integer.
* @args: A va_list containing the unsigned integer
* to be printed in hexadecimal.
*
* Return: The number of characters printed.
*/
int put_unsigned_hex(va_list args)
{
unsigned int num, i, j, remainder;
char buffer[20];
int charCount;

num = va_arg(args, unsigned int);
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
buffer[i++] = remainder - 10 + 'a';
}
num /= 16;
}

charCount = 0;
for (j = i - 1; j > 0; j--)
charCount += _putchar(buffer[j]);

return (charCount);
}


