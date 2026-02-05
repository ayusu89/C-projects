#include<stdio.h>
int SI(float p,float t,float r );
int main()
{
	float p , t ,r , si;
	printf("Enter the value of principal , time and rate \n");
	scanf("%f%f%f",&p,&t,&r);
	si=SI(p,t,r);
	printf("Simple Interest = %f",si);
	return 0;
}
	int SI(float p , float t,float r)
	{
		float SI;
		SI=(p*t*r)/100;
		return SI;
	}
	

