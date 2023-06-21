#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: the arry
 * @size: the size of array
 * @action: a poniter to the function toe excecuted
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
