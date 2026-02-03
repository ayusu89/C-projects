#include<stdio.h>
int main()
{
	int i,j,m,n,num[100][100],sum;
	printf("Enter the order of the matrix \n ");
	scanf("%d%d",&m,&n);
	printf("Enter %d elements of a matrix \n ",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				scanf("%d",&num[i][j]);
		}
	}
	for(j=0;j<n;j++)
	{
		sum = 0;
		for(i=0;i<m;i++)
		
		{
			sum=sum+num[i][j];
		}
		printf("sum of all %d column in an array :%d \n", j+1, sum);
	}
	
	return 0;
}
