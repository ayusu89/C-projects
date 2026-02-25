#include<stdio.h>
#include<string.h>
struct dob
{
	int mm;
	int dd;
	int yy;
};
struct students
{
	int rollno;
	char name[20];
	float per;
	char address[20];
};
int main()
{
	struct students st[100];
	int i;
	int n;
	printf("Enter the number of students \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the record of %d student\n ",i+1);
		printf("Enter the rollno of student\n");
		scanf("%d",&st[i].rollno);
		fflush(stdin);
		
		printf("Enter the name of the student\n");
		gets(st[i].name);
		
		printf("Enter the percentage of student \n");
		scanf("%f",&st[i].per);
		fflush(stdin);
		
		printf("Enter the address \n");
		gets(st[i].address);
	}
	printf("The record of students whose address is Chitwan\n");
	printf("\t Rollno \t Name \t Percentage \t Address \n");
	for(i=0;i<n;i++)
	{
		if(strcmp(st[i].address,"Chitwan")==0)
		{
			printf("\t %d \t %s \t %f \t %s\t \n",st[i].rollno,
			st[i].name,st[i].per,st[i].address);
		}
	}
	return 0;
	
}
