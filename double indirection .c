#include<stdio.h>
int main()
{
	int num = 20;
	int *ptr1;
	int **ptr2;
	ptr1 = &num;
	ptr2 = &ptr1;
     printf("%d \n",*ptr1);
     printf("%d",**ptr2);
     return 0;
}
