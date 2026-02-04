#include<stdio.h>
int main()
{
    int i,j,num[20][20],n,m,esum=0;
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
                    if(num[i][j]%2==0)
                        {
                           esum=esum+num[i][j];
                        }

                }
        }
    printf("\n sum of even elements : %d \n ",esum);
    return 0;
}
