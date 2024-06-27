#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - A program that add up two positive intergers
 *@argc: Argument count
 *@argv: Argment name
 *Return: 1 if it is not an interger otherwise 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];


		for (j = 0; arg[j] != '\0'; j++)

		{
			if (!isdigit(arg[j]))
			{

				printf("Error\n");
				return (1);
			}
		}
			sum += atoi(arg);

	}
	printf("%d\n", sum);
	return (0);
}

