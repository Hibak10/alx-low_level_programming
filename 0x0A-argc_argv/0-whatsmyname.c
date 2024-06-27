#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
