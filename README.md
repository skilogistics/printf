
# printf
This project is a pair project by collaborators Yemi and Pibo.
--

- *Prototype*: `int _printf(const char *format, ...);` 
- *Returns*: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more details.
   This function handles the following conversion specifiers:
  
| Specifier  | Description |
|------------|-------------|
| `c`        | Prints a single character. The argument must be an int that represents the ASCII value of the character.|
| `s`        | Prints a literal null-terminated string (pointer to char).|
| `%`        | Prints a percent sign (%). No argument is required.|
| `d`        | Prints a signed decimal integer. The argument must be of type int.|
| `i`        | Prints a signed decimal integer. The argument must be of type int. |


*Examples*:

1. `_printf("Let's try to printf a simple sentence.\n");` <br>prints "Let's try to printf a simple sentence", followed by a new line
2. `_printf("This is a number: %d", 39);` <br> prints "This is a number: 39"
--- 
