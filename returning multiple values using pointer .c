#include<stdio.h>
void areaperi (int radius , float *area , float *peri);
int main()
{
	int r;
	float a , p;
	printf("Enter the radius \n");
	scanf("%d",&r);
	areaperi(r , &a ,&p);
	printf("Area of a circle = %f \n",a);
	printf("Perimeter of a circle = %f",p);
	return 0;
}
void areaperi (int radius , float *area , float *peri)
{
	*area=3.1416*radius*radius;
	*peri= 2*3.1416*radius;
} 

