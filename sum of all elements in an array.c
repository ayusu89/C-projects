#include<stdio.h>
int main()
{
    int num[100],i;
    int n,sum=0;
    printf("Enter the number of array elements \n");
    scanf("%d",&n);
    printf("Enter %d array elements \n",n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
        }
            for(i=0;i<n;i++)
                {
                   sum=sum+num[i];

                }
     printf("\n Sum of all = %d\n",sum);
     return 0;
}
