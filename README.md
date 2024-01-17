# ist-printf

The C programming language introduced the function `printf` to let programmers control the format of their output, including outputting the values of variables. The basic syntax of the `printf` function is:

```c
printf("format string", variable_list, ...);
```

## The Format String

First, a string is a specific set of characters that the C compiler will not treat as code. The specific ASCII bytes for each character are stored in the exact order as written. In C (and most other programming languages) strings are delimited by opening and closing quotation marks.

Example
```c
"Murry"  // This string is stored in hex as 4D 75 72 72 79
```

The `printf` function will output whatever string is given as it's first argument. However, `printf` will also look at the format string for special sequences of characters. For example, when `printf` sees a '\n', it will insert a *new line character*. The format string may also contain special *format specifiers* that act as placeholders for variable data.

## Format Specifiers

A format specifiers start with the `%` character, followed by different options. The only required option is the *type* modifer. The type modifier is a one character letter that tells `printf` what kind of data to expect. Here is a brief list of the important format specifier types.

- %i - Signed integer type in base 10
- %d - Also signed integer type in base 10
- %o - Integer represented in base 8 (octal)
- %x - Integer represented in base 16 (hexadecimal)
- %f - Floating point displayed with decimal point
- %e - Floating point displayed in scientific notation
- %c - Single character
- %s - String

When `printf` sees these format specifiers in the format string, it replaces each one with the value of a variable listed after the format string.

```c
printf("1st = %i, 2nd = %f, 3rd = %c", a, b, c);
```

## printf.c

Take a look at the contents of the printf.c file. Then, compile and run it.

```bash
cat printf.c
gcc printf.c -o printf
./printf
```

Now, modify this file so that there is only one `printf` statement that prints out each value. The order of the variables given to `printf` will be the order that the format specifiers are replaced. Using vim, change the three `printf` statements into this one:

```c
printf("a = %i, f = %f, c = %c\n", a, f, c);
```

Recompile and run.

## integers.c

Now let's take a look at some different ways to display integers. Make a copy of the printf.c file to create a new file integers.c

```bash
cp printf.c integers.c
```

Using vim, edit the integers.c file by deleting all references to the f and c variables. Then create 4 new printf statements outputting the value of a in different formats.

```c
printf("a displayed as base 10 integer: %i\n", a);
printf("a displayed as base 8 integer: %o\n", a);
printf("a displayed as base 16 integer: %x\n", a);
printf("a displayed as base 16 integer: %X\n", a);
printf("a displayed as base 10 unsigned integer: %u\n", a);
```

Compile and run this new program.

```bash
gcc integers.c -o integers
./integers
```

As an added exercise, edit integers.c and change the value of a to a negative number. How does the output change when a is negative?

