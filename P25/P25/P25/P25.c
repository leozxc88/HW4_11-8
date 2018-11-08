#include<stdio.h>
#include<stdlib.h>
int reference(int &a);
int main()
{
	int x = 100;
	int y = reference(x);
	printf("x=%d\n", x);
	system("pause");
}
int reference(int &a)
{
	a++;
	printf("xref=%d\n", a);
	return a;
}