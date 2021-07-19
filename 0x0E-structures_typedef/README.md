# 0x0E. C - Structures, typedef

### Learning Objectives

- What are structures, when, why and how to use them
- How to use typedef

### Tasks

- [dog.h](dog.h)

```shell
Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

```
- [1-init_dog.c](1-init_dog.c) - function that initialize a variable of type struct dog
```shell
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
```
- [print_dog.c](print_dog.c) - function that prints a struct dog
```shell
Prototype: void print_dog(struct dog *d);
```
- [dog.h](dog.h) - Define a new type dog_t as a new name for the type struct dog.
- [4-new_dog.c](4-new_dog.c) -  function that creates a new dog.
- [5-free_dog.c](5-free_dog.c) - function that frees dogs.


### Resources

- [0x0d. Structures.pdf](https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210719%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210719T230427Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=b20fe87ea6aa3f6c25ac5944d9bc0b645d0d8e8be4413933c598ebc81bc10172)
- [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- [Documentation: structures](https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)
- [0x0d. Typedef and structures.pdf](https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210719%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210719T230610Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=5fce76fa9ea6896e0bf67cede5454eff8fb60b606fe67bfebf99286deb551888)
- [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
- [Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189](http://index-of.es/C++/Programming%20in%20C%203rd%20edition%20by%20Stephen%20G.%20Kochan.pdf)
- [The Lost Art of C Structure Packing ](http://www.catb.org/esr/structure-packing/)