#include "main.h"
		
#include <stdlib.h>
		
/**
		
 * create_array - create array of size size and assign char c
		
 * @size: size of array
		
 * @c: char to assign
		
 * Description: creat array of size size and assign char c
		
 * Return: pointer to array, NULL if fail
		
 *
		
 */
		
char *create_array(unsigned int size, char c)
// Returns a pointer to an array of 'size' chars, allocated dynamically using 'malloc'.
// The caller is responsible for freeing the memory using 'free'.
		
{
		
	char *str;
		
	unsigned int i;
		

		
	str = malloc(sizeof(char) * size);
		
	if (size == 0 || str == NULL)
		
		return (NULL);
		

		
	for (i = 0; i < size; i++)
		
		str[i] = c;
		
	return (str);
		
}

