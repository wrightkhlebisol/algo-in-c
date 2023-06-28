#include <stdio.h>

int atoi(char *intstring)
{
	int res = 0;

	while (*intstring != '\0')
	{
		int charint = *intstring - '0';
		res = ((res * 10) + charint);
		intstring++;
	}
	return (res);
}

int main(void)
{
	printf("%d\n", atoi("5493951234"));
}
