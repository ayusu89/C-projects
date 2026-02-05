#include<stdio.h>
int snatural (int n);
int main ()
{
	int num,sum;
	printf("Enter the value of number \n");
	scanf("%d",&num);
	sum=snatural(num);
	printf("Sum of n natural numbers = %d ",sum);
	return 0;
}
int snatural (int n)
{
	int i ,sum=0;
	for(i=0;i<=n;i++)
	{
        sum = sum + i;		
	}
	return sum ;
	
}
