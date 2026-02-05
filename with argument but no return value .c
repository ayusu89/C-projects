#include<stdio.h>
void SI(float p,float t,float r);
int main()
{
	float p ,t,r,si;
	printf("Enter the value of principal , time and rate \n");
	scanf("%f%f%f",&p,&t,&r);
	SI(p,t,r);
	return 0;
}
void SI(float p ,float t,float r)
{
	float SI;
	SI=(P*t*r)/100;
   printf("Simple Interest = %f",SI);
}

