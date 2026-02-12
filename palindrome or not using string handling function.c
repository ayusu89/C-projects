#include<stdio.h>
#include<string.h>
int main()
{
	 char str1[20],str2[20];
	printf("Enter the string \n");
     gets(str1);
	strcpy(str2,str1);
	strrev(str2);
	 if (strcmp(str1,str2 )==0)
	 	{
	 		printf("string is palindrome");
		}
	else
		{
			printf("String is not palindrome	");
		}
	return 0;
	 
}
