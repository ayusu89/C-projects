#include<stdio.h>
int main ()
{
	int i,j,m,n,num[20][20] ,largest;
	printf("Enter the order of matrix \n");
	scanf("%d%d",&m,&n);
	printf("Enter %d elements of a matrix\n",m*n);
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
					printf("%d \t",num[i][j]);
				}
		printf("\n");
		}
	 largest = num[0][0];
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
					if(num[i][j]>largest)
						{
							largest = num[i][j];
						}
				}
		}
		printf("The largest element is :%d",largest);
		return 0;
}
