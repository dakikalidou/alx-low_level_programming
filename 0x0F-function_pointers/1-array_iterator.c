#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given.
 * @size: The size of the array.
 * @array: The array
 * @action: pointer to the function you need to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
