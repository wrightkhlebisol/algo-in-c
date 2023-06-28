#include <stdio.h>

int factorial_iterative(int n)
{
	int res;
	int i;

	res = 1;
	i = 1;
	while (i <= n)
	{
		res = res * i;
		i++;
	}
	return (res);
}

int factorial_recursive(int n)
{
	if (n == 0)
		return (1);

	return (n * factorial_recursive(n - 1));
}

int main(void)
{
	printf("5! = %u\n", factorial_recursive(5));
	return (0);
}
