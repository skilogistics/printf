#include "main.h"

/**
 * itoa - int to ascii
 * @num: num
 * @baseNum: number base
 *
 * Return: char
 **/
char *itoa(long int num, int baseNum)
{
static char *array;
static char buffer[50];
char *ptr;
char sign;
unsigned long n;

array = "0123456789abcdef";
n = num;
sign = 0;
if (num < 0)
{
n = -num;
sign = '-';
}
ptr = &buffer[49];
*ptr = '\0';

while (n != 0)
{
*--ptr = array[n % baseNum];
n /= baseNum;
}

if (sign)
*--ptr = sign;
return (ptr);
}

/**
 * put_pointer - Prints the value of a pointer in hexadecimal format.
 * @args: A va_list containing the pointer to be printed.
 *
 * Return: The number of characters printed.
 */
int put_pointer(va_list args)
{
void *ptr = va_arg(args, void *);
char buffer[20];
int charCount;
unsigned long long int num;
int i;

charCount = 0;
charCount += _putchar('0');
charCount += _putchar('x');
num = (unsigned long long int)ptr;


i = 0;
if (num == 0)
return (_putchar('0'));

while (num > 0)
{
int remainder = num % 16;
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

for (int j = i - 1; j >= 0; j--)
charCount += _putchar(buffer[j]);

return (charCount);
}
