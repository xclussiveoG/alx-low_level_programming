#include "search_algos.h"

/**
 * perform_linear_search - searches for a value in a sorted array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * @prev: previous index
 * @jump: jump index
 *
 * Return: index where value is located, or -1 on failure
 */
int perform_linear_search(int *array, size_t size, int value, size_t prev,
						  size_t jump)
{
	while (array[prev] < value && prev < size)
	{
		print_value_checked(array, prev);
		if (prev == MIN(jump, size))
			return (-1);

		prev++;
	}

	if (array[prev] == value)
	{
		print_value_checked(array, prev);
		return (prev);
	}

	return (-1);
}

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, jump;

	if (array == NULL || size == 0)
		return (-1);

	prev = 0;
	jump = sqrt(size);

	print_value_checked(array, prev);
	while (array[MIN(jump, size) - 1] < value)
	{
		prev = jump;
		jump += sqrt(size);

		/* oops! we went overboard, the value does not exist in the array */
		if (jump >= size)
		{
			print_value_checked(array, prev);
			break;
		}

		print_value_checked(array, prev);

		/*
		 * we found the target value either at the start or endof block size.
		 * Perform linear search to find the exact index
		 */
		if (array[prev] == value || array[jump] == value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, jump);

	return (perform_linear_search(array, size, value, prev, jump));
}

