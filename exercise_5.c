#include <stdio.h>

long sum_num(long*, long*);

int main()
{
	long num1, num2;
	printf(" Input the first number : ");
  	scanf("%d", &num1);
	printf(" Input the second  number : ");
	scanf("%d", &num2);

	printf("The sum of %d and %d  is %d\n", num1, num2, sum_num(&num1, &num2));

	return (0);
}

long sum_num(long *num1, long *num2)
{
	return(*num1 + *num2);
}
