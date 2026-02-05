#include<stdio.h>
void SI();
int main ()
{
	SI();
	return 0;
}
void SI()
 {
 	float p ,t ,r ,si;
 	printf("Enter the value of principal , time and rate \n");
 	scanf("%f%f%f",&p,&t,&r);
 	si=(p*t*r)/100;
 	printf("Simple Interest = %f",si);
 }


