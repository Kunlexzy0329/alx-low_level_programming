#include "main.h"

/**
 *create_array- function that create an array
 *@size: size of the array
 *@c: character to be consider
 *Return: str to the main function
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j = 0;

	if (size == 0)
		return (NULL);
	str = malloc((sizeof(*str) * size));
	if (str == NULL)
		return (NULL);
	for (; j < size; )
	{
		str[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
