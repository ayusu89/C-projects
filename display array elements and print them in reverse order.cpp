#include<stdio.h>
int main ()
{
	int arr[100],n,i;
	printf("Enter the value of array elements \n");
	scanf("%d",&n);
	printf("Enter %d array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The array elements in reverse order are : \n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
