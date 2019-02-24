#include <stdio.h>
#include <stdlib.h>

void print_arr(int*, int);

int main()
{
   int arr1[25], i,n;
   printf("\n\n Pointer : Store and retrieve elements from an array :\n"); 
   printf("------------------------------------------------------------\n");    
   printf(" Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf(" Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : ",i);
	  scanf("%d",arr1+i);
	  }
   printf(" The elements you entered are : \n");
   
   print_arr(arr1, n);
	   return 0;
}

void print_arr(int*arr, int n)
{
    int i;
    
    for(i=0; i < n;i++)
      {
	  printf(" element - %d : %d \n",i,*(arr+i));
	  }
}
