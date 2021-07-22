# 0x0F. C - Function pointers

### Learning objectives

- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory

### Tasks

- [0-print_name.c](0-print_name.c) - Test file:  [ 0-main.c](test/0-main.c)
```shell
Prototype
void print_name(char *name, void (*f)(char *));
```
- [1-array_iterator.c](1-array_iterator.c) - Test file: [1-main.c](test/1-main.c)
```shell
Prototype
void array_iterator(int *array, size_t size, void (*action)(int));
```
- [2-int_index.c](2-int_index.c) - Test file : [2-main.c](test/2-main.c)
```shell
Prototype
int int_index(int *array, int size, int (*cmp)(int));
```
