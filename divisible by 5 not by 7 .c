 #include<stdio.h>
int main()
{
	int num;
	printf("Enter the value of num \n");
	scanf("%d",&num);
	if(num%5==0 && num%7!=0)
	{
		printf("number is divisible by 5 but not by 7 = %d \n",num);
	}
	else
	{
		printf("given condition is not satisfied \n");
	}
	return 0;
}
