#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t j, step, jump;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	for (j = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", jump, array[jump]);
		j = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", j, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; j < jump && array[j] < value; j++)
		printf("Value checked array [%ld] = [%d]\n", j, array[j]);
	printf("Value checked array [%ld] = [%d]\n", j, array[j]);

	return (array[j] == value ? (int)j : -1);
}
