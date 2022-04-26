#include "main.h"

/**
 * _memcpy - a function that cpiest memory
 * @dest: memory where is stored
 * @src: memory where is copied
 * @: number of bytes
 * Return: sucess
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for  (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
