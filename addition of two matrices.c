#include<stdio.h>
int main()
{
	int num1[2][3],num2[2][3],i,j,sum[2][3];
	printf("Enter the %d elements for matrix 1 \n",2*3);
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&num1[i][j]);
		}
	}
	printf("Enter the %d elements for matrix 2 \n",2*3);
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&num2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=num1[i][j]+num2[i][j];
		}
	}
	printf("Sum of two matrices is : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
