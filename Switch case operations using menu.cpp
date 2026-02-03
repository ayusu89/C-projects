#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,num,sum=0,rev=0,rem;
	int choice;
	char ch;
	printf("1.Reverse a number \n");
	printf("2. Find the sum of individual unit \n");
	printf("3. Display ASCII characters from 0 to 225 \n");
	printf("4. Exit ");
	printf("\n Enter yours choice \n ");
	scanf("%d" , &choice);
	switch (choice)
	{
		case 1:
			printf(" Enter any number  \n");
			scanf("%d",&num);
			while(num!=0)
		{
			rem=num %10;
			rev=rev*10+rem;
			num=num/10;
		}
			printf("Reverse of a number = %d",rev);
			break;
			
		case 2:
			printf("Enter the number \n");
			scanf("%d",&num);
			while(num!=0)
			{
				rem=num%10;
				sum=sum+rem;
				num=num/10;
			}
			
			case 3:
				for(i=0;i<=225;i++)
				{
					printf("ASCII character for %d = %c \n",i,i);
				}
				break;
				
				case 4:
					exit(1);
					break;
					
					default:
						printf("Wrong choice \n ");
	}
	return 0;
}
