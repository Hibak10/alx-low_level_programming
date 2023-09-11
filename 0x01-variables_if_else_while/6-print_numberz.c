#include <stdio.h>
/**
  *main  print all single digit numbers of base 10 starting from 0
  *Description:  only use the putchar function
  *You are not allowed to use any variable of type char
  *only use putchar twice
  *Return: (0)
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
