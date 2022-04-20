#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>

/**
* struct pin - a structure that contains a function and a flag.
* @flag: a character that identifies a function.
* @fn: the pointer to a function.
*/

typedef struct pin
{
        char flag;
        char *(*fn)(va_list args);
} sir;

int _printf(const char *format, ...);
char *funct(const char symbol, va_list);
void *print_str_cat(char *dest, char *src);
char *print_str_char(va_list args);
int print_str_concat(char *buff, const char *format, int n);
char *print_str_integer(va_list args);
int print_str_len(char *s);
char *print_str_percent(va_list args);
char *print_str_string(va_list args);




#endif

