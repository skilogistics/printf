#include "main.h"

/**
 * itoa - int to ascii
 * @num: num
 * @base: baseNum
 *
 * Return: char
 **/
char *itoa(long int num, int baseNum)
{
static char *array = "0123456789abcdef";
static char buffer[50];
char *ptr;
char sign;
unsigned long n;

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
