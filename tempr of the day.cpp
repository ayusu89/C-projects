#include<stdio.h>
int main()
{
	int tempr;
	printf("Enter the value of temperature in fahreneit \n");
	scanf("%d",&tempr);
	if(tempr>60 && tempr<80)
	{
		printf("\"NICE DAY\"");
	}
	else if (tempr<=60)
	{
		printf("\"COLD DAY\"");
	}
	else if (tempr>=80)
	{
		printf("\"HOT DAY\"");
	}
	else
	{
		printf("Given conditions are not satisfied \n");
	}
	return 0;
}
