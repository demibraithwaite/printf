_Printf Project

This is the repo for our take on the printf function.

Description

The printf function prints a format control string of different data types on the standard output, its roots are in the C programming language, it is a functional way to produce a precise output format for printing numerical values or ASCII characters from format specifiers that have been passed on in the argument.

Prototype

This _printf function produces output according to a format:

int _printf(const char *format, ...);

Formats

flag = function

%c = print a single character

%d = print a integer as a signed decimal (base 10) number

%i = print same as "d", integer in base 10

%s = print a string

Compilation

All .c files are necessary for compilation, code is compiled this way:

gcc -Wall -Werror -Wextra -pedantic *.c -o name_of_executable

Files Description

The _printf function produces output according to a format:

file = description

_printf.c = Contain the main function of the _printf

funct.c = Contain the content for found the specifiers of the _printf function

main.h = Contain the struct and prototypes to the _printf function

man_3_printf = Contain the man page of the _printf function with all its specifications

print_str_cat.c = function that concatenates the buffer and the temporal string

print_str_char.c = function that found a character to print with _printf function

print_str_concat.c =function that concatenates the format with the buffer and update iterator of format

str_integer.c = function that print and found a integer to print with _printf function

strlen.c = function that gets the length of the buffer

str_percent.c function that print the sign percent of the specifier format to print of _printf function

str_string.c function that found a string to print with _printf function

