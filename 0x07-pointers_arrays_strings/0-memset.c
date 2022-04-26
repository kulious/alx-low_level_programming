#include "main.h"
/**
 * _memstt - fills a block of memory with a specific value or set of value
 * @s: starting address of memory to be filled
 * @b: the diresed value
 * @n: number of bytes to be changed
 * Return: changes array with newvalue for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
