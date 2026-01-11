#include<stdio.h>
int main()
{
	int i ,esum=0 ,osum=0 , ecount=0,ocount=0;
	for(i=51;i<500;i++)
{
	if(i%2==0)
	{
	esum=esum+i;
	ecount++;
	}
	else
	{
	osum=osum+i;
	ocount++;
	}
 }
    printf("Esum=%d \n",esum);
	printf("ecount=%d \n",ecount);
	printf("Osum=%d \n",osum);
	printf("Ocount=%d \n",ocount);
return 0;
}
