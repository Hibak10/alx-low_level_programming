#include <stdio.h>
/**
  *main - Prints the alphabetes in lowercase and then uppercase.
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}


