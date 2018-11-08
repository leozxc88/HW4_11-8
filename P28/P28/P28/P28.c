#include<stdio.h>
#include<stdlib.h>
#define size 5
void qwer(int q[]);
void wert(int q);
int main()
{
	int i;
	int a[size] = { 0,1,2,3,4 };
	printf("Effects of passing entire array by reference\n\nThe values of the original array are¡G\n");
	for (i = 0; i < size; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");
	qwer(a);
	printf("\n\n\n");
	printf("Effects of passing array element by value¡G\n\n");
	printf("The value of a[3] is %d\n", a[3]);
	wert(a[3]);
	printf("The value of a[3] is %d\n", a[3]);

	system("pause");
}
void qwer(int q[])
{
	int j;
	printf("The values of the modified array are ¡G\n");
	for (j = 0; j < size; j++)
	{
		q[j] = q[j] * 2;
		printf("%3d", q[j]);
	}
}
void wert(int q)
{
	printf("Value in modifyElement is %d\n", q *= 2);
}