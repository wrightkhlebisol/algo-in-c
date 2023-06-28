#include <stdio.h>

/**
* Recursive function called countVowels that returns the number of vowels in a given string (assume "y" is not a vowel)
*/
int countvowels(char *str)
{
	if (*str == '\0')
		return (0);

	if ((*str < 65 && *str > 90) || (*str < 97 && *str > 122))
		return (0);

	printf("%d\n", *str+1);
	if(*str != 65 || *str != 69 || *str != 73 || *str != 79 || *str != 85 || *str != 97 || *str != 101 || *str != 105 || *str != 111 || *str != 117)
		return (0);
	
	printf("%d\n", *str);

	return (countvowels(str + 1));
}

int main(void)
{
	char *str = "Hello";
	printf("Length of %s: %d\n", str, countvowels(str));
}
