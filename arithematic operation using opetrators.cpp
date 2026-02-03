#include<stdio.h>

int main()
{

	int num1,num2;
	float add,sub,division,multiplication;
	char choice;
	printf("+. Find the sum of numbers \n ");
	printf("-. Find the subtraction of numbers \n ");
	printf("*. Find the multiplication of a number \n");
	printf("/. Find the division of a number \n ");
	
	

	
	printf("\n Enter your choice \n");
	scanf("%c",&choice);
	
	switch (choice)
	{
		case '+':
	    printf("Enter the value of two numbers \n");
	    scanf("%d%d",&num1,&num2);
	    add=num1+num2;
	    printf("Sum of numbers = %f",add);
	    break;
	    
	    case '-':
	    	printf("Enter the value of two numbers \n");
	    	scanf("%d%d",&num1,&num2);
	    	sub=num1-num2;
	    	printf("Subtraction of a number = %f",sub );
	    	break;
	    	
	    	case '*':
	    		printf("Enter the value of two numbers \n");
	    		scanf("%d%d",&num1 ,&num2);
	    		multiplication =num1*num2;
	    		printf("Multiplication = %d,multiplication ");
	    		break;
	    		
	    		case '/':
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
	    
	    		
	    		
	    		
	





