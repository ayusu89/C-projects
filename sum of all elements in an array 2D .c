#include<stdio.h>
int main()
{
    int i,j,num[20][20],n,m,sum=0;
    printf("Enter the order of matrix \n");
    scanf("%d%d",&m,&n);
    printf("Enter %d array elements \n ",m*n);
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
                    sum=sum+num[i][j];
                }
        }
    printf("\n sum of all elements : %d \n ",sum);
    return 0;
}
