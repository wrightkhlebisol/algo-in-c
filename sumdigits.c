#include <stdio.h>
int sumDigits(long long int digits);
/**
Write a recursive function called sumDigits to return the sum of all of the digits in a given integer value. 
*/

int main(void)
{
	long int digits = 23454894939348406;
	printf("Sum of digits in %ld is %d\n", digits, sumDigits(digits));
}

int sumDigits(long long int digits)
{
	if (digits == 0)
		return (0);

	return ((digits % 10) + sumDigits((digits / 10)));
}
