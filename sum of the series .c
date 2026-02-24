#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float x,sum=1;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	printf("Enter the value of x \n");
	scanf("%f",&x);
	 for(i=1;i<=n;i=i+2)
	 {
	 	sum = sum +pow(x,i);
	 }
	 printf("sum = %f",sum);
	 return 0;
}
