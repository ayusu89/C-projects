#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name [20];
	char address [20];
	float salary;
	int i ,n;
	FILE *fptr;
	fptr=fopen("employee.txt","w+");
	if(fptr==NULL)
	{
		printf("Error in opening the file .");
		exit(1);
	}
	printf("Enter the number of employee \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the name , address and  salary of employee %d \n",i+1);
		scanf("%s%s%f",name,address,&salary);
		fprintf(fptr,"%s \t %s \t %f \n ",name , address , salary);
	}
	rewind(fptr);
	printf("Name \t Address \t Salary \n");
	while(fscanf(fptr,"%s%s%f",name, address , &salary)!=EOF)
	{
		printf("%s \t %s \t %f \n",name , address ,salary);
	}
	fclose(fptr);
	return 0;
}
