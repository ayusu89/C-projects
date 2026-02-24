#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,num[100][100],m,n ,sum=0;
	printf("Enter the order of matrix : \n");
	scanf("%d%d",&m,&n);
	if(m!=n)
	{
		printf("Invalid order of matrix. \n");
		exit(1);
	}
	printf("Enter %d elements of a matrix : \n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if (i==j)
			{
				sum = sum + num[i][j];
			}
		}
	}
	printf("Sum of the diagonal elements : %d \n",sum);
	return 0;

}
