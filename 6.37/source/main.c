#include<stdio.h>
#include<stdlib.h>

int recursiveMaximum(int A[], int counter);
void num(int A[], int x);

int main(void)
{
	int i, j;
	int A[1000] = { 0 };
	printf("How many numbers will you input: ");
	scanf_s("%d", &i);

	num(A, i);

	printf("\nMaximum number : %d\n", recursiveMaximum(A, i));

	system("pause");
	return 0;

}

void num(int A[], int x)
{
	int counter, j;

	printf("Enter your mumbers: ");

	for (counter = 0; counter < x; counter++)
	{
		scanf_s("%d", &A[counter]);
	}

	printf("Your numbers : \n");

	for (j = 0; j < x; j++)
	{
		printf("%d %d\n",j + 1, A[j]);
	}

}

int recursiveMaximum(int A[], int counter)
{
	int max;

	if (counter == 1)
	{
		return A[0];
	}
	else
	{
		max = recursiveMaximum(A, counter - 1);

		if (A[counter - 1] > max)
		{
			return A[counter - 1];
		}
		else
		{
			return max;
		}
	}
}