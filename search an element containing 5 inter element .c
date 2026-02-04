#include<stdio.h>
int main()
{
    int i,num[100],pos,flag=0,search;
    printf("Enter the 5 array elements\n");
    for(i=0;i<5;i++)
        {
            scanf("%d",&num[i]);
        }
    printf("Enter the element you want to search \n");
    scanf("%d",&search);
    for(i=0;i<5;i++)
        {
            if(search==num[i])
                {
                    flag=1;
                    pos=i;
                    break;

                }
        }
    if(flag==1)
        {
            printf("Element is present at index num[%d]=%d",pos,num[i]);
        }
        else
         {
            printf("Element is not present");
         }
 return 0;
}
