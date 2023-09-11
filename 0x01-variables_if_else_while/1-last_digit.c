#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main  - Entry point
  *description: print out the last digit of a number.
  *if the last digit of n is greater than 5: the string and is greater than 5
  *if the last digit of n is 0: the string and is 0
  *if the last digit of n is less than 6 and not 0
  *return always (0)
*/
int main(void)
	/**main function for priningt out the last digit of a number*/
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (n > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (n  == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
