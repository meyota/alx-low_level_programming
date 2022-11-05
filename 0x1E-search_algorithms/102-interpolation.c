#include "search_algos.h"


/**
  * interpolation_search - Searches using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The size of the array.
  * @value: The value to search for.
  *
  * Return: Null, -1, the first index where the value is located.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, j, k;

	if (array == NULL)
		return (-1);

	for (j = 0, k = size - 1; k >= j;)
	{
		i = j + (((double)(k - j) / (array[k] - array[j])) * (value - array[j]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			k = i - 1;
		else
			j = i + 1;
	}

	return (-1);
}
