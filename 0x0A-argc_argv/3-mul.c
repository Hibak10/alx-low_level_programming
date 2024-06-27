#include <stdio.h>
#include <stdlib.h>
/**
 *main - Program that prints multiplication of two intergers
 *@argc: Argument count.
 *@argv:Argument name
 *Return: 1 if two arguments are received else 0
 *
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Erorr\n");

		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

