#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5,per;
	printf("Enter the value of 5 subjects\n");
	scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
	per=(sub1+sub2+sub3+sub4+sub5)/5;
	if(per>=80)
	{
		printf("\"DISTINCTION\"");
	}
	else if (per>=60)
	{
		printf("\"FIRST DIVISION\"");
	}
	else if(per>=45)
	{
		printf("\"SECOND DIVISION\"");
	}
	else if (per>=32)
	{
		printf("\"THIRD DIVISION\"");
	}
	else
	{
		printf("\"FAILED\"");
	 
}
	return 0;
}
