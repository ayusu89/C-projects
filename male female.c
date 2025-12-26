#include<stdio.h>
int main()
{
	float amnt,total_amnt;
	char ch;
	
	printf("Enter the value of amnt \n");
     scanf("%f",&amnt);
     
    
     
	printf("Enter the character m for male and f for female \n");
	scanf(" %c",&ch); 
	
	 if (ch =='M'|| ch =='m')
{
	total_amnt=amnt-(0.05*amnt);
	
	
}
else if ((ch=='F' || ch=='f')&&(amnt>5000))
{
	total_amnt=amnt-(0.15*amnt);
}
else
{
	total_amnt=amnt;
	
}
printf("Payable amnt=%f",total_amnt);

return 0;
}
