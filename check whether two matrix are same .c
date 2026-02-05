#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[20][20],b[20][20];
	int i,j,m,n,p,q,flag=0;
	printf("Enter the order of first matrix \n");
	scanf("%d%d",&m,&n);
	printf("Enter %d elements of first matrix \n",m*n);
	for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
					scanf("%d",&a[i][j]);
				}
		}
	
	printf("Enter the order of second matrix \n");
	scanf("%d%d",&p,&q);
	printf("Enter %d elements of second matrix \n ",p*q);
	for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
				{
					scanf("%d",&b[i][j]);
				}
		}
		if(m!=p && n!=q)
			{
			   printf("Given matrix is not same \n");
			}
			
	    for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
					if(a[i][j]==b[i][j])
						{
							flag=1;
							break;
						}
		        }
		}
		if(flag==1)
			{
				printf("Given two matrix are same \n");
			}
			else
				{
					printf("Given two matrix are not same \n");
				}
	return 0;
}
