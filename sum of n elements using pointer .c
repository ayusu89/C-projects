#include<stdio.h>
int main()
{
	int arr[100],n,i,*ptr,sum=0;
	ptr=arr;
	printf("Enter the elements you want to enter \n");
	scanf("%d",&n);
	printf("Enter %d array elements \n" ,n);
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(ptr+i);
	}
	printf("The sum of all elements = %d",sum);
	return 0;
}
