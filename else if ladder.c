#include<stdio.h>
#define METERCHARGE 50
int main()
{
	float units,charge,totalcharge;
	printf("Enter the number of units\n");
	scanf("%f",&units);
	if(units<=100)
	{
		charge=units*40;
	}
	else if(units<=300)
	{
		charge=100*40+(units-100)*50;
	}
	else
	{
		charge=100*40+200*50+(units-100)*60;
	}
	totalcharge=charge+METERCHARGE;
	printf("%f=total charge",totalcharge);
	return 0;
	
	
}
