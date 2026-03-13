#include<stdio.h>
int main()
{
	int num , i,base=1,sum=0,rem;
	printf("Enter the number \n");
	scanf("%d",&num);
	i=num;
	while(num!=0)
	{
		rem=num%2;
		sum=sum+rem*base;
		base=base*10;
		num=num/2;
	}
	printf("Binary equivalent of %d is %d \n",i,sum);
	return 0;
}
