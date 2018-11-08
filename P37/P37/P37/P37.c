#include<stdio.h>
#include<stdlib.h>
#define size 100
int qwer(int a);
int main()
{
	int x[size], y, i, z;
	x[0] = 0;
	for (i = 0; i < size; i++)
	{
		if (i != 0)
		{
			x[i] = x[i - 1] + 2;
		}
	}

	printf("Enter integer search key¡G\n");
	scanf_s("%d", &z);
	y = qwer(z);
	if (y == -1)
	{
		z = z / 2;
		printf("Found value in element %d\n", z);
	}
	else
	{
		printf("Value is not found\n");
	}
	system("pause");
}
int qwer(int a)
{
	if (a % 2 == 0)
	{
		return -1;
	}
}
