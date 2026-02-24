#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int i,j,n,temp;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	ptr = ((int *)calloc(n,sizeof(int)));
	if (ptr == NULL)
	{
		printf("Error! memory not allocated .");
		exit(1);
	}
	printf("Enter %d elements \n",n);
	for(i=0;i<n;i++)
	{
		
		scanf("%d",ptr+i);
	}
	printf("The elements before sorting are : \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",*(ptr+i));
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*(ptr+j)>*(ptr+j+1)
			{
		 temp = *(ptr + j);
            *(ptr + j) = *(ptr + j + 1);
            *(ptr + j + 1) = temp;
           }
		}
	}
		printf("The elements after sorting are : \n");
		for(i=0;i<n;i++)
		{
			printf("%d \n",*(ptr+i));
		}
		return 0;
	
}
