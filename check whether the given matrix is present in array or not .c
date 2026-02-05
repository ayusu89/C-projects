#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[20][20],search;
	int i,j,m,n,flag=0,row,column;
	printf("Enter the order of  matrix \n");
	scanf("%d%d",&m,&n);
	printf("Enter %d elements of matrix \n",m*n);
	for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
					scanf("%d",&num[i][j]);
				}
		}		
	 printf("Enter the element you want to search \n");
	 scanf("%d",&search);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
					if(num[i][j]==search)
						{
							flag=1;
							row =i;
							column = j;
							break;
						}
		        }
		}
		if(flag==1)
			{
				printf("Element is present at index num[%d][%d] = %d \n",row,column,search);
			}
			else
				{
					printf("Element is not present\n");
				}
	return 0;
}
