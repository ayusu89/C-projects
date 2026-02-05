#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i,j,m,n,arr[20][20];
	printf("Enter the order of matrix \n");
	scanf("%d%d",&m,&n);
	if(m!=n)
		{
			printf("INVALID ORDER\n ");
			exit(0);
		}
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
	printf("\n upper triangular matrix is : \n ");
		for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
					{
						if(i>j)
							{
								arr[i][j]=0;
							}
							printf(" %d\t",arr[i][j]);
				    }
		            printf("\n");
			}
		
    return 0;
}
