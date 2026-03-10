#include<stdio.h>
int main()
{
    float charge , total_charge;
	float units;
	printf("Enter the units \n");
	scanf("%f",&units);
	
	if(units<=100)
	{
		charge = 100;
	}
	else if (units<150)
	{
		charge = 100 + (50*8.5);
	}
	else if (units<250)
	{
		
		charge = 100 + (50 * 8.5)+ (units-150)*9.5;
	}
	else
	{
		charge = 100 + (50*8.5) + (units - 150)*9.5 +(units - 250); 
	}
	total_charge = charge + 0.13 * charge + 100 ;
	printf("Total charge = %f\n",total_charge);
	return 0;
}
