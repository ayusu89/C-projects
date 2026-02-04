#include<stdio.h>
int main()
{
    int i,j,num[100],n,temp;
    printf("Enter the number of elements of an array \n");
    scanf("%d",&n);
    printf("Enter %d array elements \n",n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
        }
   for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
             {
                 if(num[j]<num[j+1])
                  {
                    temp=num[j];
                     num[j]=num[j+1];
                     num[j+1]=temp;
                  }

             }
        }
         printf("Third largest element is : %d \n ",num[2]);

    return 0;
}
