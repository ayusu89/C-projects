#include<stdio.h>
int main ()
{
	int i,j,m,n,sum,arr[20][20] ,select;
	printf("Enter the order of matrix \n");
	scanf("%d%d",&m,&n);
	printf("Enter %d elements of a matrix\n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("elements of a matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
      	printf("Enter the row you want to sum\n");
      	scanf("%d",&select);
      	

		for(j=0;j<n;j++)
		{
			sum=sum+arr[select-1][j];
		}
	printf("sum=%d",sum);

	
	return 0;
}
