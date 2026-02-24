#include<stdio.h>
int main()
{
	int i,j,sum=0,num[100][100];
	printf("Enter %d elements of matrix \n ",4*4);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			sum = sum + num[i][j];
		}
	}
	printf("Sum of all elements = %d ",sum);
	return 0;
}
