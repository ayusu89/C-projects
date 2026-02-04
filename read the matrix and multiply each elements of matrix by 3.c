#include<stdio.h>
int main()
{
    int i,j,num[20][20],n,m;
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
                    num[i][j]=3*num[i][j];
                }
        }
    printf("The elements of matrix after being multiplied are : \n ");
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    printf("%d \t ",num[i][j]);
                }
                    printf("\n");
        }
        return 0;
}
