#include<stdio.h>
#include<stdlib.h>
#define size 3
void qwer(int a);
void wert(int a);
int main()
{
	int j = 0;
	printf("First call to each each function¡G\n\n");
	qwer(j);
	wert(j);
	printf("Second call to each function¡G\n\n");
	qwer(j);
	wert(j);
	system("pause");
	return 0;
}
void qwer(int a)
{
	static int k[size];
	int i;
	printf("Values on entering staticArrayInit¡G\n");
	for (i = 0; i < size; i++)
	{
		printf("array1[%d] = %d  ", i, k[i]);
	}
	printf("\n");
	printf("Values on exiting staticArrayInit¡G\n");
	for (i = 0; i < size; i++)
	{
		printf("array1[%d] = %d  ", i, k[i] += 5);
	}
	printf("\n\n");
}
void wert(int a)
{
	int i;
	int k[size] = { 1,2,3 };
	printf("Values on entering automicArrayInit¡G\n");
	for (i = 0; i < size; i++)
	{
		printf("array2[%d] = %d  ", i, k[i]);
	}
	printf("\n");
	printf("Values on exiting automicArrayInit¡G\n");
	for (i = 0; i < size; i++)
	{
		printf("array2[%d] = %d  ", i, k[i] += 5);
	}
	printf("\n\n");
}

