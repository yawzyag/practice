#include <stdio.h>

int main()
{
	int num1, num2;
	printf(" Input the first number : ");
  	scanf("%d", &num1);
	printf(" Input the second  number : ");
	scanf("%d", &num2);
	int *p1 = &num1;
	int *p2 = &num2;


	printf("The sum of the entered numbers is : %d\n", *p1 + *p2);

	return (0);
}
