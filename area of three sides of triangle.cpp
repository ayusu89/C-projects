#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s,area;
	printf("Enter the values of a,b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a>=b+c)||(b>=a+c)||(c>=a+c))
	{
		printf("\"INVALID DATA\"");
	}
	else
	{
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("area=%d",area);
	}
	return 0;
}
