#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int _isdigit(char *c);
void _puts(char *c);
void setting_0(char *pointer, int length);
char *_mul(char c, char *s, int length_s, char *result, int result_length);
char *remove_zero(char *pointer);

/**
 * main - returns a print of the result
 * @argc: length of argv
 * @argv: input array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *num1, *num2, *pointer, *verify, msj_error[] = "Error";
	int size_num1 = 0, size_num2 = 0, i, k, pointer_l;

	num1 = argv[1];
	num2 = argv[2];

	if (argc != 3 || !_isdigit(num1) || !_isdigit(num2))
	{
		_puts(msj_error);
		exit(98);
	}
	num1 = remove_zero(num1);
	num2 = remove_zero(num2);

	while (num1[size_num1])
		size_num1++;
	while (num2[size_num2])
		size_num2++;
	/*Max result lenght = sum size num1 + size num2*/
	pointer_l = size_num1 + size_num2;

	pointer = malloc(sizeof(char) * (pointer_l + 1));

	if (pointer == NULL)
	{
		_puts(msj_error);
		exit(98);
	}
	setting_0(pointer, pointer_l + 1);

	for (i = size_num2 - 1, k = 0; i >= 0; i--, k++)
	{
		/* k = Effect to move 1 space th mul result to left*/
		verify = _mul(num2[i], num1, size_num1, pointer, pointer_l - k);
		if (verify == NULL)
		{
			_puts(msj_error);
			free(pointer);
			exit(98);

		}
	}

	/* print_without_left_cero(pointer, pointer_l);*/
	printf("%s\n", remove_zero(pointer));
	free(pointer);

	return (0);
}

/**
 * _isdigit - to identify if a value is a digit
 * @c: char pass to verify
 *
 * Return: return 1 if true, otherwise 0
 */

int _isdigit(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (!(c[i] >= '0' && c[i] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * _puts - print the char with a new line at the end
 * @c: char to print
 *
 * Return: print
 */

void _puts(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
		_putchar(c[i]);
	_putchar('\n');
}

/**
 * setting_0 -  start the values of the array in '0'
 * @pointer: pointer to start
 * @length: size of pointer including '\0'
 *
 * Return: pointer
 *
 */

void setting_0(char *pointer, int length)
{
	int i = 0;

	for ( ; i < length - 1; i++)
		pointer[i] = '0';
	pointer[i] = '\0';

}

/**
 * _mul - multiply 2 numbers
 * @c: actual char from the number 2 operation
 * @n1: number 1 in string
 * @length_number1: size of number 1
 * @result: pointer where is stores the result
 * @out_pos: actual start position from r to l to the sum logic
 * Return: an string with the result stored
 *
 */

char *_mul(char c, char *n1, int length_number1, char *result, int out_pos)
{
	int last_number2, i, multi, cmul = 0, cadd = 0, rsum = 0, bu;



	last_number2 = c - '0';

	for (i = length_number1 - 1, bu = out_pos; i >= 0 ; i--, bu--)
	{
		multi = last_number2 * (n1[i] - '0') + cmul;
		cmul = multi / 10;
		rsum = (result[bu - 1] - '0') + (multi % 10) + cadd;
		cadd = rsum / 10;
		result[bu - 1] = (rsum % 10) + '0';
	}
	cadd += cmul;

	if (cadd)
	{
		rsum = (result[bu - 1] - '0') + cadd;
		result[bu - 1] = rsum % 10 + '0';
	}

	return (result);

}

/**
 * *remove_zero - removing zeros at left side of a char number
 * @pointer: pointer to change
 *
 * Return: pointer changed
 */

char *remove_zero(char *pointer)
{
	int i = 0, j = 0, aux = 0;

	for ( ; pointer[i]; i++)
		;
	for ( ; j < i; j++)
	{
		if (pointer[j] == '0')
			aux++;
		else
			break;
	}
	return (pointer + aux);
}
