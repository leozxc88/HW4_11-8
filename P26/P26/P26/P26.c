#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[3];
	printf("    array = %p\n&array[0] = %p\n   &array = %p\n   ", a, &a[0], &a);
	system("pause");
}