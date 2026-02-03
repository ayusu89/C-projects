#include<stdio.h>
int main()
{
	int i,n,num[100];
	printf("Enter the number of arrays \n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	 printf("The array in reverse order:");
	for(i=n-1;i>=0;i--)
	{
		printf("% \n",num[i]);
	}
	return 0;
}
