# 0x07. C - Even more pointers, arrays and strings

### Learning objectives

- What are pointers to pointers and how to use them
- What are multidimensional arrays and how to use them
- What are the most common C standard library functions to manipulate strings

### Tasks

- [0-memset.c](0-memset.c) - function that fills memory with a constant byte.
- [1-memcpy.c](1-memcpy.c) - function that copies memory area.
- [2-strchr.c](2-strchr.c) - function that locates a character in a string.
- [3-strspn.c](3-strspn.c) - function that gets the length of a prefix substring.
- [4-strpbrk.c](4-strpbrk.c) - function that searches a string for any of a set of bytes.
- [5-strstr.c](5-strstr.c) - function that locates a substring.
- [7-print_chessboard.c](7-print_chessboard.c) - function that prints the chessboard.
- [8-print_diagsums.c](8-print_diagsums.c) - function that prints the sum of the two diagonals of a square matrix of integers.

### Advanced tasks

- [100-set_string.c](100-set_string.c) - function that sets the value of a pointer to a char.
- [101-crackme_password](101-crackme_password) - file that contains the password for the [crackme2](crackme2) executable.

### Resources

- [C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
- [C – Pointer to Pointer with example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
- [Multi-dimensional Arrays in C](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)
- [Two dimensional (2D) arrays in C programming with example](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/)
- [How to hack crackme2](https://hybridivy.wordpress.com/2016/04/04/dont-hate-the-hacker-hate-the-code-part-3/) 

### Steps for the crack

- [1](steps_crack/1.PNG) - using ltrace to verify the password
- [2](steps_crack/2.PNG) - Checking if the password variable is store like global variable
- [3](steps_crack/3.PNG) - using ldd
- [4](steps_crack/4.PNG) - using radare2 to figureout what kind of cryp has the file
- [5](steps_crack/5.PNG) - It's Md file
- [6](steps_crack/6.PNG) - Getting the password in MD5
- [7](steps_crack/7.PNG) - Using MD5 reverse Hash
- [8](steps_crack/8.PNG) - checking again the password variable
- [9](steps_crack/9.PNG) - Declaring password variable like global
- [10](steps_crack/10.PNG) - Opening successfuly the file