#include<stdio.h>
#include<math.h>
int main ()
{
	float a,b,c,descriminant,root1,root2;
	printf("Enter the value of a,b and c \n");
	scanf("%f%f%f",&a,&b,&c);
	descriminant= b*b - 4*a*c;
	
	if(descriminant<0)
	{
		printf("\"Roots are imaginary\"");
	}
	else
	{
		root1= (-b+sqrt(descriminant))/2*a;
		root2= (-b-sqrt(descriminant))/2*a;
		printf("%f ,%f are the required roots ", root1,root2);
	}
	
	return 0;
}
