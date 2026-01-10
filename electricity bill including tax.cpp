#include<stdio.h>
#define TAX 0.15
int main()
{
	float units,amount,total_amount;
	printf("Enter the value of units \n");
	scanf("%f",&units);
	if(units<=20)
	{
		amount =80;
	}
	else if (units<=100)
	{
		amount = 80+(units-20)*7.5;
	}
	else if (units<=200)
	{
		amount = 80+(units-20)*7.5+(units-100)*8.5;
	}
	else if (units>200)
	{
		amount = 80+(units-20)*7.5+(units-100)*8.5+(units-200)*9.5;
	}
	
		total_amount= amount + amount*TAX;
    	printf("The total_amount = %f",total_amount);
	

	return 0;
}
