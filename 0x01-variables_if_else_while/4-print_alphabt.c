#include <stdio.h>
/**
  *main - Entry point
  *Description:prints the alphabet in lowercase
  *You can only use putchar twice in your code
  *Return: (0)
  */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}



