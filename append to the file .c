#include<stdio.h>
#include<stdlib.h>
struct books
{
	char name [20];
	char author[20];
	float price ;
};
int main()
{
	struct books b;
	int i ;
	FILE*fptr;
	fptr=fopen("library.dat","ab+");
	if(fptr==NULL)
	{
		printf("Error in opening the file !\n");
		exit(1);
	}
	printf("Enter the records of books \n");
	for(i=0;i<5;i++)
	{
		printf("Enter the name of book \n");
		gets(b.name);
		printf("Enter author name \n");
		gets(b.author);
		printf("Enter price of book \n");
		scanf("%f",&b.price);
		fflush(stdin);
		fwrite(&b,sizeof(b),1,fptr);
	}
	printf("Successfully appended these details in the file . \n");
	fclose(fptr);
	return 0;
}
