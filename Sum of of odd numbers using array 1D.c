#include<stdio.h>
int main()
{
    int num[100],i;
    int n,osum=0;
    printf("Enter the number of array elements \n");
    scanf("%d",&n);
    printf("Enter %d array elements \n",n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
        }
            for(i=0;i<n;i++)
                {
                        if(num[i]%2!=0)
                            {
                                osum=osum+num[i];

                            }

                }


                    printf("\nSum of odd elements = %d \n",osum);

                    return 0;
}
