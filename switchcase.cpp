#include<stdio.h>

int main()
{
	int choice,num1,num2;
	float add,sub,division,multiplication;
printf("1. Find the sum of numbers \n ");
	printf("2. Find the subtraction of numbers \n ");
	printf("3. Find the multiplication of a number \n");
	printf("4. Find the division of a number \n ");
	
	
	printf("\n Enter your choice \n");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
	    printf("Enter the value of two numbers \n");
	    scanf("%d%d",&num1,&num2);
	    add=num1+num2;
	    printf("Sum of numbers = %f",add);
	    break;
	    
	    case 2:
	    	printf("Enter the value of two numbers \n");
	    	scanf("%d%d",&num1,&num2);
	    	sub=num1-num2;
	    	printf("Subtraction of a number = %f",sub );
	    	break;
	    	
	    	case 3:
	    		printf("Enter the value of two numbers \n");
	    		scanf("%d%d",&num1 ,&num2);
	    		multiplication =num1*num2;
	    		printf("Multiplication = %d,multiplication ");
	    		break;
	    		
	    		case 4:
	    		printf("Enter the value of two numbers \n");
	    		scanf("%d%d",&num1,&num2);
	    		division=num1/num2;
	    		printf("Divison = %f",division);
	    		 break;
	    		 
	    		 default:
	    		 		printf("Wrong choice");
	    		 	
	             	
	    		
	    		
	    		}
	    		return 0;
	    	}
	    
	    		
	    		
	    		
	


