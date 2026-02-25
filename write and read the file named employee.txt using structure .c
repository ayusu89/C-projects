#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee
{
	char name [20];
	char address [20];
	long int phone ;
};
int main()
{
	int i;
	struct employee emp[2];
	FILE *fptr;
	fptr=fopen("employee.txt","wb+");
	if(fptr==NULL)
	{
		printf("Error in opening the file! \n");
		exit(1);
	}
	printf("Enter the records of 2 employee \n");
	for(i=0;i<2;i++)
	{
		printf("Enter the name of employee\n");
		gets(emp[i].name);
		printf("Enter the address \n");
		gets(emp[i].address);
		printf("Enter the phone number of the employee \n");
		scanf("%ld",&emp[i].phone);
		fflush(stdin);
    }  
		fwrite(&emp,sizeof(emp),2,fptr);
		rewind(fptr);
		
		printf("Record of employee \n");
		printf("\tName \tAdress \tPhone \n");
		fread(&emp,sizeof(emp),2,fptr);
		for(i=0;i<2;i++)
		{
			printf(" \t%s\t%s\t%ld\n",&emp[i].name,&emp[i].address,&emp[i].phone);
		}
		
		fclose(fptr);
		return 0;
		
	
}
