#ifndef MAIN_H
#define MAIN_H

/* Headers */
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct printer - struct printer
 * @printer: The printer
 * @f: function pointer
 */
typedef struct printer
{
char printer;
int (*f)(va_list);
} printer_t;

/* Constants */
#define BUFSIZE 512

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_number(va_list args);
int print_binary(va_list args);
int print_reverse(va_list args);
int (*get_print_func(const char s))(va_list);
int _strlen(char *s);
int print_percent(va_list args);
int print_else(va_list args);

#endif /* MAIN_H */
