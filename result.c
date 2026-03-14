#include<stdio.h>
#include<stdlib.h>
struct student 
{
	char name [20];
	char address [20];
	char faculty [20];
	char program [20];
	float gpa ;
};
int main()
{
	struct student st [1];
	int i;
	FILE *fptr;
	fptr=fopen("RESULT.DAT","wb+");
	if(fptr==NULL)
		{
			printf("ERROR! ERROR IN OPENING THE FILE \n");
			exit(0);
		}	
	for (i=0;i<1;i++)
	{
		printf("The record of %d student : \n\n",i+1);
		printf("ENTER THE NAME \n");
		gets(st[i].name);
		printf("ENTER ADDRESS \n");
		gets(st[i].address);
		printf("ENTER FACULTY \n");
		gets(st[i].faculty);
		printf("ENTER PROGRAM \n");
		gets(st[i].program);
		do
		{
			printf("ENTER GPA \n");
			scanf("%f",&st[i].gpa);
		}while(st[i].gpa <0 || st[i].gpa>4);
	}
	fwrite(&st,sizeof(st),1,fptr);
	rewind(fptr);
	printf("\n DISPLAYING THE RECORDS WHO IS ENGINEER AND GPA > 3.5 \n");
	printf("\n \t NAME \t ADDRESS \t PROGRAM \t GPA \t \n");
	for (i=0;i<1;i++)
	{
		if((strcmp(st[i].faculty,"engineering")==0)&&(st[i].gpa>3.5))
		{
			printf("\n \t %s \t %s \t %s \t %f \t \n ",st[i].name , st[i].address , st[i].program , st[i].gpa);
		}
	}
     fptr=fclose;
     return 0;     
	}
	
