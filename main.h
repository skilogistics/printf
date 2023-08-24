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
#define BUFSIZE 1024

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
int rot13(va_list args);
char *_strchr(char *s, char c);
int _puts(const char *str);
int _put_unsigned(va_list args);
int put_unsigned_hex(va_list args);
int put_unsigned_hex_upper(va_list args);
int _put_octal(va_list args);
char *itoa(long int, int);
int put_pointer(va_list args);
#endif /* MAIN_H */
