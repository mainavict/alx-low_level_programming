#include "function_pointers.h"
/**
 * int_index - search for an interger within an array
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
