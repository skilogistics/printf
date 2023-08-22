#include "main.h"

/**
* print_binary - Prints an integer in binary format using putchar
* @args: Variable argument list containing the integer to be printed
* Return: Updated count of characters printed.
*/
int print_binary(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
unsigned int mask;
int leading_zeros, count;

mask = 1 << (sizeof(unsigned int) * 8 - 1);
leading_zeros = 1;
count = 0;

if (num == 0)
{
_putchar('0');
count++;
return (count);
}

while (mask > 0)
{
if (num & mask)
{
leading_zeros = 0;
_putchar('1');
count++;
}
else if (!leading_zeros)
{
_putchar('0');
count++;
}
mask >>= 1;
}

return (count);
}
