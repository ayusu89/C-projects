#include<stdio.h>
int main()
{
	int area,length,breadth;
	printf("Enter the value of length and breadth \n");
	scanf("%d%d",&length,&breadth);
	area=length*breadth;
	printf("Area of the room = %d \n",area);
	if(area>2500)
	{
		printf("\"AUDITORIUM\"");
	}
	else if (area>=500 && area<=2500)
	{
		printf("\"HALL\"");
	}
	else if (area>150 && area<500)
	{
		printf("\"BIG ROOM \"");
	}
	else
	{
		printf("\"SMALL ROOM \"");
	}


	return 0;
}
