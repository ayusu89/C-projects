#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[20][20],b[20][20],pro[20][20];
	int i,j,m,n,p,q ,k;
	printf("Enter the order of first matrix \n");
	scanf("%d%d",&m,&n);
	
	printf("Enter the order of second matrix \n");
	scanf("%d%d",&p,&q);
	
	if(n!=p)
	{
		printf("Multiplication not possible \n");
		exit(0);
	}
	
	printf("Enter %d elements of first matrix \n",m*n);
	for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
					scanf("%d",&a[i][j]);
				}
		}
		
	printf("Enter %d elements of second matrix \n ",p*q);
	for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
				{
					scanf("%d",&b[i][j]);
				}
		}
	for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
				{
					pro[i][j]=0;
					for(k=0;k<n;k++)
						{
							pro[i][j]+=(a[i][j]*b[i][j]);
						}
				}
		}
	printf("Product of a two matrix \n");
	for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
				{
					printf("%d \t",pro[i][j]);
				}
			printf("\n");
		}
	return 0;
}
