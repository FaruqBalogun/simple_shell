#include "shell.h"



/**
 * _strcmp - This perform lexicogarphic comparison of two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: Positive if s1 > s2, Negative if s1 < s2, zero if s1 == s2.
 */


/**
 * _strcat - concatenates two strings
 * @dest: The destination buffer
 * @src: The source buffer
 *
 * Return: A pointer to the  destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;

	return (ret);
}


/**
 * _strlen - Return the length of a string
 * @s: The string whose length is to be checked
 *
 * Return: integer length of string.
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;

	return (i);
}


/**
 * starts_with - Checks if needle starts with haystack
 * @haystack: String to search
 * @needle: The substring to find
 *
 * Return:  The address of next char of NULL or  hayastack
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

