#include <stdio.h>
/**
  *main - Entry point
  *Decription: prints all possible combinations of single-digit numbers
  *Numbers must be separated by commas followed by a space
  *You can only use the putchar function
  *You can only use putchar four times
  *You are not allowed to use any variable of type char
  *Return: (0)
  */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(44);
			putchar(32);

		}
	}
	putchar('\n');
	return (0);
}
