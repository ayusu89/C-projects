#include<stdio.h>
#include<string.h>
struct student 
{
	char name [20];
	int rollno;
	float sub1,sub2,sub3,sub4,sub5;
	float avg;
};
int main()
{
	int i;
	struct student st[2];
	for(i=0;i<2;i++)
	{
		printf("The records of  %d students are :\n",i+1);
		
		printf("Enter the name of student \n");
		gets(st[i].name);
		
		printf("Enter the rollno of students\n");
		scanf("%d",&st[i].rollno);
		fflush(stdin);
		
		printf("Enter the marks of five subjects \n");
		scanf("%f%f%f%f%f",&st[i].sub1,&st[i].sub2,&st[i].sub3,&st[i].sub4,&st[i].sub5);
		st[i].avg=(st[i].sub1+st[i].sub2+st[i].sub3+st[i].sub4+st[i].sub5)/5;
		fflush(stdin);
	}
	printf("Enter the records of students whose average marks is greater than 80 \n");
	printf("Rollno\t Name\n");
	
	for(i=0;i<2;i++)
	{
		if(st[i].avg>80)
		{
			printf("%d\t %s\n",st[i].rollno,st[i].name);
		}
	}
	return 0;
	
}
