#include <stdio.h>
#include <stdlib.h>

void stringReverse(char string[]);
int stringLength(char *string[]);
int i, j;

int main(void)
{
	char string[] = "ABCabc";
	i = stringLength(string) - 1;
	printf("Origin String  : %s\nReverse String : ", string);
	stringReverse(string);
	printf("\n");
	system("pause");
	return 0;
}

void stringReverse(char string[])
{
	if (i == 0)
	{
		printf("%c", string[i]);
	}
	else
	{
		printf("%c", string[i]);
		i--;
		stringReverse(string);
	}
}

int stringLength(char *string[])
{
	int size;
	char *character = string;

	for (size = 0; *character != NULL; character++)
	{
		size++;
	}
	return size;
}