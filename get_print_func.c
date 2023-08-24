#include "main.h"

/**
 * get_print_func - function pointer that selects the correct function
 * @s: the given chars
 * Return: pointer to the function
 */
int (*get_print_func(const char s))(va_list)
{
printer_t funcs[] = {
{'c', print_char},
{'s', print_string},
{'%', print_percent},
{'i', print_number},
{'d', print_number},
{'u', _put_unsigned},
{'o', _put_octal},
{'x', put_unsigned_hex},
{'X', put_unsigned_hex_upper},
{'b', print_binary},
{'r', print_reverse},
{'R', rot13},
{'\0', NULL}
};

int i;

i = 0;
while (funcs[i].printer != '\0')
{
if (funcs[i].printer == s)
return (funcs[i].f);
i++;
}

return (NULL);
}
