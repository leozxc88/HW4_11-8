#include<stdio.h>
#include<stdlib.h>
#define students 3
#define exams 4

int minimum(const int grades[][exams], int pupils, int tests);
int maxmum(const int grades[][exams], int pupils, int tests);
double averge(const int setof[], int tests);
void print(const int grades[][exams], int pupils, int tests);

int main(void)
{
	int student;
	const int studentG[students][exams]=
	{{77,68,86,73},
	 {96,87,89,78},
	 {70,90,86,81}};

	printf("the array is:\n");
	print(studentG, students, exams);

	printf("\n\nLowest grade: %d\nHighest grade: %d\n",
		minimum(studentG, students, exams),
		maxmum(studentG, students, exams));

	for (student = 0; student < students; student++)
	{
		printf("the averge grade for student %d is %.2f\n",
			student, averge(studentG[student], exams));
	}

	system("pause");
	return 0;
}
void print(const int grades[][exams], int pupils, int tests)
{
	int i, j;

	printf("                [0]  [1]  [2]  [3]");

	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentGrades[%d]", i);
		for (j = 0; j < tests; j++)
			printf("%-5d", grades[i][j]);
	}
}
int minimum(const int grades[][exams], int pupils, int tests)
{
	int i, j, low = 100;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] < low)
			{
				low = grades[i][j];
			}
		}
	}
	return low;
}
int maxmum(const int grades[][exams], int pupils, int tests)
{
	int i, j, high = 0;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > high)
			{
				high = grades[i][j];
			}
		}
	}
	return high;
}
double averge(const int setof[], int tests)
{
	int i, total = 0;
	for (i = 0; i < tests; i++)
	{
		total += setof[i];
	}
	return (double)total / tests;
}
