#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct books
{
	char name[20];
	char author[20];
	float price ;
};
int main()
{
	struct books b[2];
	int i;
	FILE *fptr;
	fptr=fopen("library.dat","wb+");
	if(fptr==NULL)
	{
		printf("Error in opening the file\n");
		exit(1);
	}
	printf("Enter the records of 2 books\n");
	for(i=0;i<2;i++)
	{
		printf("Enter the name of book\n");
		gets(b[i].name);
		printf("Enter the name of the author \n");
		gets(b[i].author);
		printf("Enter the price of the book \n");
		scanf("%f",&b[i].price);
		fflush(stdin);
	}
	fwrite(&b,sizeof(b),2,fptr);
	rewind(fptr);
	
	printf("Records of books whose price is greater than 300 \n");
	printf("\tName\tAuthor\tPrice\n");
	fread(&b,sizeof(b),2,fptr);
	for(i=0;i<2;i++)
	{
		if(b[i].price>300)
		{
				printf("\t%s\t%s\t%f\n",b[i].name,b[i].author,b[i].price);
		}
	
	}
	fclose(fptr); 
	return 0;
}
	



