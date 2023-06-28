#include <stdio.h>

int print(int nb)
{
	if(nb <0)
		return (0);

	printf("%d", nb);
	printf("%d", nb + print(nb - 1));
	nb--;
	printf("%d", nb);
	return (nb);
}

int main(void)
{
	print(4);
	return (0);
}

/**
void print(int nb)
{
    printf("%d", nb);
    -- nb;
    if (nb > 0)
    {
        print(nb);
    }
}

int main(void)
{
    print(4);
    return (0);
}


void print(int nb)
{
    printf("%d", nb);
    nb ++;
    if (nb < 10) 
    {
    	printf("checking nb %d\n", nb);
        print(nb);
    }
}

int main(void)
{
    print(4);
    return (0);
}
*/
