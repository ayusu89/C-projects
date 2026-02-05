#include<stdio.h>
void swap(int *x , int *y);
int main()
{
	int a ,b ;
	printf("Enter the value of two numbers \n");
	scanf("%d%d",&a,&b);
	printf("Elements before swapping : a = %d and b = %d \n",a,b);
	swap(&a,&b);
	printf("Elements after swapping : a = %d and b = %d \n",a, b);
	return 0;
}
void swap(int *x , int *y)
{
  int temp;	
  temp = *x;
  *x = *y;
  *y = temp;
}

