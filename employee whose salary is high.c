#include<stdio.h>
#include<string.h>

struct dob
{
    int mm;
    int dd;
    int yy;    
};

struct employee
{
    char name[20];
    char address[20];
    float salary;
    char department[20];
    struct dob d;
};

int main()
{
    int i;
    struct employee emp[100];
    float high;

    for(i=0;i<2;i++)
    {
        printf("Enter the records of the %d employee \n ",i+1);

        printf("Enter name of the employee\n ");
        gets(emp[i].name);


        printf("Enter the address of the employee\n");
        gets(emp[i].address);

        printf("Enter the salary of the employee \n");
        scanf("%f", &emp[i].salary); 
         fflush(stdin); 

        printf("Enter the department of the employee \n");
        gets(emp[i].department);
         fflush(stdin); 

       

        printf("Enter the month of the birthday\n");
        scanf("%d", &emp[i].d.mm);     

        printf("Enter the day of the birthday\n");
        scanf("%d", &emp[i].d.dd);     

        printf("Enter the year of the birthday\n");
        scanf("%d", &emp[i].d.yy);  
		 fflush(stdin); 
   
    }
    	high=emp[0].salary;
    for(i=0;i<2;i++)
    {
        if(emp[i].salary>high)
        {
        	high=emp[i].salary;
        }
    }

    printf("The records of the employee whose salary is highest\n");
    printf("Emp-name\t Address\t Salary\t Department\t DateofBirth\n");
    for(i=0;i<2;i++)
    {
    	if(emp[i].salary==high)
    	{
       
           printf("%s\t %s\t %.2f\t %s\t %d-%d-%d\n",
                   emp[i].name,
                   emp[i].address,
                   emp[i].salary,
                   emp[i].department,
                   emp[i].d.mm,
                   emp[i].d.dd,
                   emp[i].d.yy);
        }
     }
    

    return 0;
}
