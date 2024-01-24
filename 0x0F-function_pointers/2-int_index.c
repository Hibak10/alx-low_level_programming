#include "function_pointers.h"
#include <stddef.h>
/**

  *int_index - searches for an integer

  *@array: Array containing elements

  *@size: number of elements in array

  *@cmp: function which compare values*

  *Return: on no match element returns -1

  * or when size is less than zero

 *return pointer to the first corresponding element

 *
*/

int int_index(int *array, int size, int (*cmp)(int))
{

	size_t i;


	if (array == NULL || cmp == NULL)

		return (-1);


	for (i = 0; i < size; i++)

	{

	if (cmp(array[i]) != 0)

		return (i);

	}


	return (-1);

}
