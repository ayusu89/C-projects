#include<stdio.h>
int main()
{
    int i,j,num[20][20],msum=0,m,n;
    printf("Enter the order of matrix \n");
    scanf("%d%d",&m,&n);
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
                    if(i==j)
                        {
                            msum=msum+num[i][j];
                        }
                }
        }
    printf("Sum of main diagonal  elements : %d\n",msum);
    return 0;
}
