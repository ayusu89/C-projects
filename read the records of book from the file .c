#include<stdio.h>
#include<stdlib.h>
struct books 
{
	char name [20];
	char author[20];
	float price;
};
int main()
{
	int i;
	struct books b[2];
	FILE*fptr;
	fptr=fopen("library.dat","rb");
	if(fptr==NULL)
	{
		printf("Error in opening the file \n");
		exit (1);
	}
	printf("Records of books \n");
	printf("\tName \tAuthor \tPrice\n");
	fread(&b,sizeof(b),2,fptr);
	
		for(i=0;i<2;i++)
		{
			if(b[i].price>300)
			{
				printf("\t%s \t%s \t%f \n ",b[i].name,b[i].author,b[i].price);
			}
			
		}
		
	
	fclose(fptr);
	return 0;
}
