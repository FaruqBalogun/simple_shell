#include "shell.h"


/**
 * is_delim - This checks if character is a delimeter
 * @c: the char to be checked
 * @delim: the delimeter string
 * Return: 0 if false, 1 if true.
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);

	return (0);
}



/**
 * interactive - Returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if it is in interactive mode, 0 otherwise.
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}



/**
 * _atoi - Converts a string to an integer.
 * @s: the string to be converted
 * Return: 0 if there's no numbers in string, converted number otherwise.
 */

int _atoi(char *s)
{
	int j, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (j = 0; s[j] != '\0' && flag != 2; j++)
	{
		if (s[j] == '-')
			sign *= -1;

		if (s[j] >= '0' && s[j] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[j] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}




/**
 * _isalpha - checks if alphabetic character is present
 * @c: The character to be inputed
 * Return: 1 if c is alphabetic, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

