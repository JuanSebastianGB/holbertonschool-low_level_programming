#include <stdio.h>
#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *@s: Char to analize
 *Return: integer with length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * verif - returns 1 if reach 2 same chars 0 otherwise.
 *@s: char to verify
 *@length: Length of char
 *@start: point of start of checking
 *Return: 1  or 0.
  -empty string is palindrome
 */

int verif(char *s, int l, int start)
{

	if (s[start] == s[l / 2])
		return (0);
	if (s[start] == s[l - 1 - start])
		return (verif(s, l, start + 1));
	return (0);
}

/**
 * is_palindrome - returns 1 if string is palindrome otherwise 0.
 *@s: char to verify
 *
 *Return: 1  or 0.
  -empty string is palindrome
 */

int is_palindrome(char *s)
{

	return(verif(s, _strlen_recursion(s), 0));

}
