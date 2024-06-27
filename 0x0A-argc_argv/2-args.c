#include <stdio.h>
/**
 *main - Prints all the arguments it receives including with
 *	the first one, each per line.
 *@argc: Argument count
 *@argv: Array name
 *Return:0
 */

int main(int argc, char *argv[])
{
	int  i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

