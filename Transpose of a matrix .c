#include<stdio.h>
int main ()
{
	int i,j,m,n,arr[20][20];
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
	printf("\n Transpose of a given matrix is : \n ");
		for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
					{
						printf("%d \t",arr[j][i]);
					}
				printf("\n");
			}
		
    return 0;
}
