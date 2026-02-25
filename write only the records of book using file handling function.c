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
	int i;
	struct books b[2];
		FILE*fptr;
		fptr=fopen("library.dat","wb");
		if(fptr==NULL)
		{
			printf("Error in opening the file ! \n");
			exit(1);
		}
		
		printf("Enter the records of books \n");
		
		
		for(i=0;i<2;i++)
		{
			printf("Enter the name of book \n");
			gets(b[i].name);
			printf("Enter author name\n");
			gets(b[i].author);
			printf("Enter price of book \n");
			scanf("%f",&b[i].price);
			fflush(stdin);
		}
		
		fwrite(&b,sizeof(b),2,fptr);
		printf("Data Successfully written to file . \n");
		fclose(fptr);
		return 0;
}
