#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct dob
{
	int mm;
	int dd;
	int yy;
};
struct student
{
	int rollno;
	char name[20];
	char address[20];
	char faculty[20];
	struct dob d;
};
int main()
{
	int i;
	struct student st[2];
	FILE*fptr;
	fptr=fopen("student.txt","wb+");
	if(fptr==NULL)
	{
		printf("Error in opening the file \n");
		exit(1);
	}
	printf("Enter the records of students\n");
	for(i=0;i<2;i++)
	{
		printf("Enter the rollno\n");
		scanf("%d",&st[i].rollno);
		fflush(stdin);
		printf("Enter the name \n");
		gets(st[i].name);
		printf("Enter the address \n");
		gets(st[i].address);
		printf("Enter the faculty\n");
		gets(st[i].faculty);
		printf("Enter month of birthday\n");
		scanf("%d",&st[i].d.mm);
		printf("Enter day of birthday\n");
		scanf("%d",&st[i].d.dd);
		printf("Enter the birth year\n");
		scanf("%d",&st[i].d.yy);
	}
	fwrite(&st,sizeof(st),2,fptr);
	rewind(fptr);
	printf("\nRecord of students who are not from Pokhara\n");
	printf("\tRollno \tName \tAddress \tFaculty \tDateofBirth\n");
	fread(&st,sizeof(st),2,fptr);
	for(i=0;i<2;i++)
	{
		if(strcmp(st[i].address,"Pokhara")!=0);
		{
			printf("\t%d \t%s \t%s \t%s \t%d-%d-%d\n",st[i].rollno,st[i].name,st[i].address,
			st[i].faculty,st[i].d.mm,st[i].d.dd,st[i].d.yy);
		}
	}
	fclose(fptr);
	return 0;
	
	
}
