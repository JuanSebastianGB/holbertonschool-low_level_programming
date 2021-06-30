# 0x05. C - Pointers, arrays and strings

### Learning Objectives

- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

### Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
- Don’t forget to push your header file

### Tasks

- [0-reset_to_98.c](0-reset_to_98.c) - function that takes a pointer to an int as parameter and updates the value it points to to 98.
- [1-swap.c](1-swap.c) - function that swaps the values of two integers.
- [2-strlen.c](2-strlen.c) - function that returns the length of a string.
- [3-puts.c](3-puts.c) - function that prints a string, followed by a new line, to stdout.
- [4-print_rev.c](4-print_rev.c) - function that prints a string, in reverse, followed by a new line.
- [5-rev_string.c](5-rev_string.c) - function that reverses a string.
- [6-puts2.c](6-puts2.c) - function that prints every other character of a string, starting with the first character, followed by a new line.
- [7-puts_half.c](7-puts_half.c) - function that prints half of a string, followed by a new line.
- [8-print_array.c](8-print_array.c) - function that prints n elements of an array of integers, followed by a new line.
- [9-strcpy.c](9-strcpy.c) - function that copies the string pointed by src to the buffer pointed by dest.

### Advanced tasks

- [100-atoi.c](100-atoi.c) - function that convert a string to an integer.
- [101-keygen.c](101-keygen.c) - function that can be used for decoding , hacking and actually open the [101-crackme](101-crackme) file

### Resources

1. [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
2. [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
3. [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)