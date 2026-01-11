#include<stdio.h>
#include<math.h>
int main()
{
	int num,sum=0,rem,n=0,orgnum;
	printf("Enter the value of orgnumber \n ");
	scanf("%d",&orgnum);
	num=orgnum;
	 
//	count number of digits
	 
	while(num!=0)
	{
		num=num/10;
		n++;
	}
	num=orgnum;
	
//to calculate Armstrong sum 
	
	while(num!=0)
	{
		rem=num%10;
		sum=sum+pow(rem,n);
		num=num/10;
	}
	if (orgnum==sum)
	{
		printf("Given number is Armstrong \n");
	}
	else 
	{
		printf("Given number is not an Armstrong \n");
	}
	return 0;
}
