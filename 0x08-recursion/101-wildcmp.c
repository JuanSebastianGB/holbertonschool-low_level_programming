#include <stdio.h>
#include "holberton.h"

/**
 * wildcmp - 1 if the strings can be considered identical, otherwise return 0.
 *@s1: String 1
 *@s2: String 2 with special char *
 *Return: integer 1 if are identical
 */

int wildcmp(char *s1, char *s2)
{

	if (!*s1 && !*s2) /*Min expresion*/
		return (1);
	if (!*s2 || (!*s1 && *s2 != '*')) /*not equal for sure*/
		return (0);
	if (*s2 == *s1) /* Normal case, both equal increment */
		return (wildcmp(s1 + 1, s2 + 1));
	/*Case ma********************************c*/
	if (!*s1 && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	/* s1 can have to '*' which is not wildcard */
	if (*s1 && *s2 == '*')
		return (wildcmp(s1 + 1, s2) | wildcmp(s1, s2 + 1));
	return (0);


}
