#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void dice(int times[11]);
void display(int times[11]);

int main(void)
{
	int times[11] = { 0 };
	srand(time(NULL));
	dice(times);
	display(times);
	system("pause");
	return 0;
}

void dice(int times[11])
{
	int num1, num2;
	int count;
	int total;

	for (count = 1; count <= 36000; count++)
	{
		num1 = (rand() % 6) + 1;
		num2 = (rand() % 6) + 1;
		total = (num1 + num2);
		times[total - 2] += 1;
	}
}

void display(int times[11])
{
	int point;
	int total_times = 0;
	float probability;

	printf("Total Point\tTimes\n");

	for (point = 2; point <= 12; point++)
	{
		printf("%d\t\t%d\n", point, times[point - 2]);
	}

	probability = times[5] / 36000.0 * 100;
	printf("\n%.2f%%\n", probability);
}