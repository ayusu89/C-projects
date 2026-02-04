#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,num[20][20],rsum=0,m,n;
    printf("Enter the order of matrix \n");
    scanf("%d%d",&m,&n);
    if(m!=n)
        {
            printf("INVALID ORDER\n");
            exit(0);
        }
    printf("Enter %d array elements \n",m*n);
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    scanf("%d",&num[i][j]);
                }
        }
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    printf("%d \t",num[i][j]);
                }
            printf("\n");
        }
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    if(i+j==m-1)
                        {
                            rsum=rsum+num[i][j];
                        }
                }
        }
    printf("Sum of main diagonal from right  elements : %d\n",rsum);
    return 0;
}
