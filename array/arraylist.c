#include <stdlib.h>
#include <stdio.h>

struct ArrayList {
	int *arr;
	int num_elements;
	int capacity;
};

void print(struct ArrayList *arraylist);

void resize(struct ArrayList *arraylist)
{
	int *temparr = malloc(arraylist->capacity * 2), i = 0;

	arraylist->capacity *= 2;

	if (temparr == NULL)
		exit (98);

	while(i < arraylist->num_elements)
	{
		temparr[i] = arraylist->arr[i];
		i++;
	}

	free(arraylist->arr);
	arraylist->arr = temparr;
}

void insert(int val, struct ArrayList *arraylist)
{
	if (arraylist->num_elements < arraylist->capacity)
	{
		arraylist->arr[arraylist->num_elements] = val;
		arraylist->num_elements++;
	}
	else
	{
		resize(arraylist);
		arraylist->arr[arraylist->num_elements] = val;
		arraylist->num_elements++;
	}
}

int getAt(int index, struct ArrayList *arraylist)
{
	return (arraylist->arr[index]);
}

void print(struct ArrayList *arraylist)
{
	int i = 0;

	while(i < arraylist->num_elements)
	{
		printf("%d ", arraylist->arr[i]);
		i++;
	}
}

struct ArrayList *create_arraylist(int size)
{
	int *arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		exit(98);

	struct ArrayList *arrayList = malloc(sizeof(struct ArrayList));

	arrayList->arr = arr;
	arrayList->num_elements = 0; 
	arrayList->capacity = size;

	return (arrayList);
}


int main(void)
{
	struct ArrayList *arraylist = create_arraylist(10);
	printf("Array length: %d\n", arraylist->num_elements);

	insert(21, arraylist);
	insert(42, arraylist);
	insert(63, arraylist);
	insert(34, arraylist);
	insert(25, arraylist);
	insert(76, arraylist);
	insert(77, arraylist);
	insert(58, arraylist);
	insert(29, arraylist);
	insert(10, arraylist);

	printf("Array length: %d\n", arraylist->num_elements);

	printf("Array: ");
	print(arraylist);
	printf("\n");

	printf("Array at index 5: %d\n", getAt(4, arraylist));

	return (0);
}
