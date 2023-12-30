#include <stdio.h>
/**
  *main - Entry point
  *Descrition: 'print alphabets in upper and lower case'
  *You can only use putchar three times in your code
  *return always (0)
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


