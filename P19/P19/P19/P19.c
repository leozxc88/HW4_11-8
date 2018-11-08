#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i;
	char string1[20];
	char string2[] = "string literal";
	printf("Enter a string ¡G");
	scanf_s("%s", string1, 20);
	printf("string1 is¡G%s\nstring2 is¡G%s\n""string1 with spaces between characters is¡G\n ", string1, string2);
	for (i = 0; string1[i] != '\0'; i++)
	{
		printf("%c ", string1[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
