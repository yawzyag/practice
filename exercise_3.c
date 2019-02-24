#include <stdio.h>

int main()
{
	int m = 300;
	float fx = 300.60;
	char cht = 'z';

	int *p1 = &m;
	float *p2 = &fx;
	char *p3 = &cht;

	printf("Using & operator :\n\n");
	printf("address of m = %p\n", &m);
	printf("address of fx = %p\n", &fx);
	printf("address of cht = %p\n\n", &cht);	

	printf("Using & and * operator :\n\n");
	printf("value at address of m = %d\n", *&m);
	printf("value at address of fx = %f\n", *&fx);
	printf("value at address of cht = %c\n\n", *&cht);	
	
	printf("Using only pointer variable :\n\n");
	printf("address of m = %p\n", p1);
	printf("address of fx = %p\n", p2);
	printf("address of cht = %p\n\n", p3);	
	
	printf("Using only pointer operator :\n\n");
	printf("value at address of m = %d\n", *p1);
	printf("value at address of fx = %f\n", *p2);
	printf("value at address of cht = %c\n", *p3);
}
