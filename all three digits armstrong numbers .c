#include<stdio.h>
#include<math.h>
int main()
{
	int i,rem,sum=0 ,num;
	for(i=100;i<1000;i++)
	{
		sum=0;
		num=i;
		while(num!=0)
		{
			rem=num%10;
			sum=sum+pow(rem,3);
			num=num/10;
		}
		if(sum==i)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
