#include<stdio.h>
int main()
{
	float price,total_amount;
	char ch;
	printf("Enter the character M for male and F for female \n");
	scanf("%c",&ch);
	fflush(stdin);
	printf("Enter the value of amount \n");
	scanf("%f",&price);
	if(ch=='m' || ch =='M')
	{
		total_amount = price-(0.05*price);
		printf("Payable amount = %f",total_amount);
	}
	else if (ch=='F' || ch=='f' && (price>5000))
	{
		total_amount = price-(0.15*price);
	printf("Payable amount = %f ",total_amount);
	}
	else 
	{
		total_amount = price - 0.05*price;
		printf("Payable amount = %f",total_amount);
	}
	return 0;
}
