#include<stdio.h>
#include<stdlib.h>
void qwer(int *q[]);
int main(void)
{
	int i;
	int a[3] = { 3,5,7 };
	for (i = 0; i <= 2; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
	qwer(&a);
	for (i = 0; i <= 2; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
void qwer(int *q[])
{
	int k, j, abc;
	for (k = 0; k <= 2; k++)
	{
		for (j = 0; j <= 2; j++)
		{
			if (q[j] > q[j - 1])
			{
				abc = q[j];
				q[j] = q[j - 1];
				q[j - 1] = abc;
			}
		}
	}
}
