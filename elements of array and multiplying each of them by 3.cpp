#include<stdio.h>
int main()
{
	int num[10][10],i,j,n,m;
	printf("Enter the order of the matrix \n");
	scanf("%d%d",&m,&n);
	printf("Enter %d array elements \n",m*n);
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
			num[i][j]=3*num[i][j];
		}
	}
	printf("The matrix elements after multiplication are : \n ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t ",num[i][j]);
		}
		printf("\n");
		
	}
return 0;
}
