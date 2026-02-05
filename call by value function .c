#include<stdio.h>
int swap(int x , int y);
int main()
{
	int a , b , s;
	printf("Enter the two numbers \n");
	scanf("%d%d",&a,&b);
	printf("Elements before swapping : a = %d and b = %d \n ",a,b);
	s=swap(a,b);
	printf("Elements after swapping : a = %d and b = %d \n ",a,b);
	return 0;
}
int swap(int x , int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
}
