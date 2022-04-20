#Our printf project
Hi there, so this happens to be our first team project in the ALX SE Program and we've been tasked with building a function that is capable of printing with the %d, %c, %s, and %% specifiers to standard output. We also added %x, %X, %b, %o, %u, %r, %R, and lastly, %p formatting. 

#The Supported Format Types
TYPE - OUTPUT

%c - Single character

%s - String of character

%d - Integer in decimal

%i - integer

%u - unsigned integer

%p - pointer address

%% - Percent sign

%r - String in reverse

%R - String in rot13

%x - Lowercase hex(loervase)

%X - Uppercase hex (unsigned)

%b - signed binary

%o - signed octal

#Some Examples are:
Character: printf("%c", I); Output = I

Integer: printf("%i", 22); Output: 22

String: printf("%s", HELLO world.); Output = HELLO world.

Now lets move over to our project tasks in order for us write the printf function:
##printf Task 0
Here, we're to write a function which gives output according to a format with the prototype of int _printf(const char *format, ...); which will return the number of characters printed (excluding the null byte used to end output to strings).
##printf Task 1
This task demands that we handle the following conversion specifiers: d and i.
##printf Task 2
Create a man page for your function.
##printf Task 3
In this task, we are required to handle the following custom conversion specifiers: b: the unsigned int argument is converted to binary.
##printf Task 4
In this task, we're asked to handle the following conversion specifiers:
`u, o, x, X`.
##printf Task 5
Here, we're to use a local buffer of 1024 chars in order to call `write` as little as possible.
##printf Task 6
Here, we've been tasked with handling the following custom conversion specifier:
`S`: prints the string.
##printf Task 7
In this task, we're to handle the following conversion specifier: `p`.
##printf task 8
Here, we're demanded to handle the following flag characters for non-custom conversion specifiers:
```
`+`
space
`#`
```
##printf task 9
Here, we're handling the following length modifiers for non-custom conversion specifiers: `l` `h`.
##printf task 10
In this task, we're handling the field width for non-custom conversion specifiers.
##printf task 11
Handling the precision for non-custom conversion specifiers.
##printf task 12
handling the `0` flag character for non-custom conversion specifiers.
##printf task 13
Handling the `-` flag character for non-custom conversion specifiers.
##printf task 14
Handling the following custom conversion specifier: `r`:prints the reversed string.
##printf task 15
Handling the following custom sonversion specifier: `R`:prints the rot13'ed string.
##printf task 16
Now all the above options work together.
