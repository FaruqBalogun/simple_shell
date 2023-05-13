#include "shell.h"

/**
 * bfree - Frees a pointer and NULLs the Address
 * @ptr: Address of the pointer to be freed
 *
 * Return: 1 if pointer is freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
