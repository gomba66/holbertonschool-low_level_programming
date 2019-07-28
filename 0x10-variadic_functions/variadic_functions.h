#ifndef VARIADIC_FUNCT
#define VARIADIC_FUNCT
#include <stdarg.h>
typedef struct types{
	char *c;
	void (*f)();
} tp;
void print_char(va_list x);
void print_int(va_list x);
void print_float(va_list x);
void print_string(va_list x);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
