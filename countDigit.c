#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int countDigitsLoop(long long int num)
{
	int count = 0;

	while (num != 0)
	{
		count++;
		num /= 10;
		printf("count: %d, num: %lld\n", count, num);
	}

	return (count);
}

int countDigitsLog(long long int num)
{
	return (log10l(num) + 1);
}

int countDigitsRecursive(long long int num)
{
	if (num == 0)
		return (0);
	
	return (1 + countDigitsRecursive(num / 10));
}

int countDigitsString()
{
	return (0);
}

int main(int argc, char **argv)
{
	if (argc < 2)
		return (1);

	long long int num = atoll(argv[1]);
	
	printf("%d\n", countDigitsRecursive(num));
	return (0);
}
