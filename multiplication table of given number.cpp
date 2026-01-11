#include<stdio.h>
int main()
{
 int i ,n;
 long int pro;
 printf("Enter the value of n \n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	pro=(n*i);
 	printf("product : %d * %d = %ld \n",n,i,pro);
 }
 return 0;
}
