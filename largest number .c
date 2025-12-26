#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter the value of 3 numbers\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("the largest number=%d",num1);
		}
		else
		{
		printf("the largest number=%d",num3);
		}
	}
		else
		{
			if(num2>num3)
			{
				printf("the largest number is=%d",num2);
			}
			else
			{
				printf("the largest number =%d",num3);
			}
	
	}
    

	 return 0;
		}
