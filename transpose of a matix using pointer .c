#include<stdio.h>
int main()
{
	int i ,j , m ,n , arr[100][100];
	printf("Enter the order of matrix \n");
	scanf("%d%d",&m,&n);
	printf("Enter %d matrix elements\n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",*(arr+i)+j);
		}
	}
	
	printf("The matrix elements are : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(*(arr+i)+j));
		}
		printf("\n");
	}
	printf("The transpose of a matrix : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d \t",*(*(arr+j)+i));
		}
		printf("\n");
	}
	return 0;
}
