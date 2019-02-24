#include <stdio.h>

int big_num(int*, int*);

int main()
{
	int num1, num2;
	printf(" Input the first number : ");
  	scanf("%d", &num1);
	printf(" Input the second  number : ");
	scanf("%d", &num2);

	printf("Expected Output :\n\n");
	printf("The bigest number is %d\n", big_num(&num1, &num2));

	return (0);
}

int big_num(int *num1, int *num2)
{
	if(*num1 > *num2)
	{
		return(*num1);
	}
	else
	{
		return(*num2);
	}
}
