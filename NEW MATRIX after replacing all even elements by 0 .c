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
	printf("\n NEW MATRIX : \n ");
		for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
					{
						if(arr[i][j]%2==0)
							{
								arr[i][j]=0;
							}
							printf(" %d\t",arr[i][j]);
				    }
		            printf("\n");
			}
		
    return 0;
}
