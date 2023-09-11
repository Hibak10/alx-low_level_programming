#include <stdio.h>
/**
  *main - Entry point
  *Descrition: 'print alphabets in upper and lower case'
  *You can only use putchar three times in your code
  *return always (0)
  */
int main(void)
{
	int n = 'a';
	int m = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
