#include<stdio.h>
int main()
{
	int i,j,m,n,num[100][100],sum=0;
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
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+num[i][j];
		}
	}
	printf("sum of all elements in an array :%d",sum);
	return 0;
}
