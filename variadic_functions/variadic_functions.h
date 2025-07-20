#ifndef variadic_func_headers
#define variadic_func_headers
#include <stdarg.h>

/**
 * struct print - print
 * @type: The operator
 * @f: The function associated
 */
typedef struct print_struct
{
    char *type;
    void (*f)(va_list args);
} print_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
