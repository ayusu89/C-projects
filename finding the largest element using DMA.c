#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int i,n ,large;
	printf("Enter the number of elements : \n");
	scanf("%d",&n);
	ptr = ((int *)calloc(n,sizeof(int)));
	if(ptr==NULL)
	{
		printf("ERROR! memory not allocated \n");
		exit(0);
	}
	printf("Enter %d elements : \n",n);
	for(i=0;i<n;i++)
	{
       scanf("%d",ptr+i);
	}
	large=*ptr;
	for(i=0;i<n;i++)
	{
		if(large<*(ptr+i))
		{
			large=*(ptr+i);
		}
	}
	printf("the largest element is %d ",large);
	return 0;
}
