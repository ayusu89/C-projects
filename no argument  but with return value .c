#include<stdio.h>
float SI ();
int main()
{
	float si;
	si=SI();
	printf("Simple Interest = %f",si);
}
float SI ()
{
	float p ,t ,r ,si;
	printf("Enter the value of principal , time and rate \n");
	scanf("%f%f%f",&p,&t,&r);
	si=(p*t*r)/100;
	return si;
}

