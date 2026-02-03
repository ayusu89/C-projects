#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
int i,len=0,flag=1;
printf("Enter the string \n");
gets(str);
for(i=0;str[i]!=0;i++)
{
len++;
}
for(len=0;i=len/2;i++)
{
if(str[i]!=str[len-1-i])
{
flag=0;
break;
}
}
if(flag==1)
{
printf("String is palindrome \n");
}
else
{
printf("String is not a palindrome\n");
}
return 0;
}

