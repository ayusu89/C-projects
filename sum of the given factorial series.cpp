#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,fact;
	float sum=1,x;
	printf("\n Enter the value of n \n");
	scanf("%d",&n);
	printf("\n Enter the value of x \n");
	scanf("%f",&x);
	for(i=1;i<=n;i++)
	{
		fact=1;
		
		for(j=1;j<=i;j++)
	{
				fact=fact * j;
  	}
				sum=sum+pow(x,i)/ (float) fact;
	}
	printf("Sum = %f",sum);
			return 0;
}
