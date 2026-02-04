#include<stdio.h>
int main ()
{
	int i,j,m,n,sum=0,arr[20][20] ,select;
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
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
					printf("%d \t",arr[i][j]);
				}
			printf("\n");
		}
      	printf("Enter the column you want to sum\n");
      	scanf("%d",&select);
      	

		for(i=0;i<m;i++)
		{
			sum=sum+arr[i][select-1];
		}
	printf(" sum of column= %d",sum);

	
	return 0;
}
