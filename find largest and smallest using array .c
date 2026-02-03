#include<stdio.h>
int main()
{
    int num[100], largest,smallest,n,i;
    printf("Enter the number of array elements\n");
    scanf("%d",&n);
    printf("Enter %d array elements \n",n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
        }
            for(i=0;i<n;i++)
                {
                    largest=num[0];
                    smallest=num[0];
                    if(num[i>largest])
                        {
                            largest=num[i];
                        }
                            else if(num[i]<smallest)
                                {
                                    smallest=num[i];
                                }
                }
    printf("\n Largest element = %d \n ",largest);
    printf("\n Smallest element = %d \n ",smallest);
    return 0;

}
