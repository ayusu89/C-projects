#include<stdio.h>
int main()
{
	int year;
	printf("Enter the value of year \n");
	scanf("%d",&year);
	if ( year%4==0 && year%10!=0 || year%400 == 0)
	{
		printf("given year is leap year = %d",year);
	}
	else
	{
		printf("given year is not a leap year = %d ",year );
	}
	return 0;
}
