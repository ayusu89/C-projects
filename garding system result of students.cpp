#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the value of marks \n");
	scanf("%d",&marks);
	if(marks>=85)
	{
		printf("Student gets A grade .");
	}
	else if (marks >=70)
	{
		printf("Student gets B grade .");
	}
	else if (marks >=55)
	{
		printf("Students gets C grade .");
	}
	else if (marks>=45)
	{
		printf("Studenhts gets D grade .");
	}
	else if (marks >=32)
	{
		printf("Students gets E grade .");
	}
	else 
	{
		printf("Student got FAIL .");
	}
	return 0;
}
