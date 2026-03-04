#include<stdio.h>
int main ()
{
	int i;
	int num[i];
	printf("Enter the array elements \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("The Array elements are:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",num[i]);
	}
	return 0;
}
