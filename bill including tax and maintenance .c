#include<stdio.h>
#define TAX 0.13 // 13% TAX
int main()
{
	int units;
	float charge =0 ,total_charge = 0;
	printf("Enter the units\n");
	scanf("%d",&units);
	if(units<=100)
	{
		charge = 100; // Minimum rate for first 100 
	}
	else if (units<=150)
	{
		charge = 100 + (units-100)*8.5;
	}
	else if (units <= 250)
	// 100(base) + 50 units at 8.5 + remaining units at 9.5 
	{
		charge = 100 + 50*8.5 + (units -150)*9.5;		
	}
	else
	// 100 (base)+ 50 units at 8.5 + 100 units at 9.5 + remaining units at 10.5 
	{
		charge = 100 + 50 *8.5+ 100 *9.5+ (units-250)*10.5;
	}
	total_charge = charge +(charge*TAX)+ 100;
	
	
	printf("Total bill of a consumer = % .2f " ,total_charge);
	
	return 0;
}
