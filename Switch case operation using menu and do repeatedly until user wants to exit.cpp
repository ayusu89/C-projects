#include<stdio.h>
#include<stdlib.h>

int main()
{
	int choice,i;
	int add=0 ,code ,n;
	char ch;
	while(1)
	{
	
	
	
printf(" \n \n 1. Find the sum of n natural numbers \n ");
	printf("\n 2. Conversion of ASCII code to char \n ");
	printf(" \n 3. Exit \n");
	
   printf("\n Enter your choice \n");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
	 printf("Enter the value of n \n");
	    scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
       	add=add+i;
	   }
	    printf("Sum of numbers = %d",add);
	   
	    break;
	    
	    case 2:
	    	printf("Enter the ASCII code : \n");
	    	scanf("%d",&code);
	    	
	    	printf("The corresponding ASCII character = %c  \n",code );
	    	break;
	
	    	
	    	case 3:
	    	exit(0);
	    	
	    	
	    		 
	    		 default:
	    		 		printf("Wrong choice");
	    		 	
	             	
	}
}
	    		
	    		
	    		return 0;
	    	}
	    
	    		
	    		
	    		
	


