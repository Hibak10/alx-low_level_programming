#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main - Prints the number of arguments passed into main
 *@argc: Number of command line arguments
 *@argv: Array name
 *Return:0
 *
 */

int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc -  1);

	for (i = 1; i > argc; i++)
	{
		printf("%d%s\n", i - 1, argv[i]);
	}
	return (0);
}

