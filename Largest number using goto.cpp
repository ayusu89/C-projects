#include<stdio.h>
int main()
{
	int a,b,label;
	printf("Enter two numbers \n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		goto label 1;
	}
	else
	{
		goto label 2;
			
	}
	label 1:
		printf("Greatest number = %d",a);
		return ;
		
		label 2:
			printf("Greatest number = %d",b);
			return 0;
}
