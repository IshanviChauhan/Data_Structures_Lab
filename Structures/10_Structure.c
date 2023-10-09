//Write a structure to store the name, account number and balance of customers (more than 10) and store their information. 
//Write a function to print the names of all the customers having balance less than $200.
//Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.
#include<stdio.h>
struct customer
{
    char name[20];
    int acc;
    int bal;
}c[15];

void names()
{
    printf("Name of customer(s) having balance < $200:\n");
    for(int i=0; i<15; i++)
    {
        if(c[i].bal<200)
        {
            printf("%s",c[i].name);
        }
    }
}

void addBalance()
{
    printf("\nAdding $100 to accounts having balance>$1000:\n");
    for(int i=0; i<15; i++)
    {
        if(c[i].bal>1000)
        {
            c[i].bal += 100;
            printf("Name: %s\nAccount no.: %d\nUpdated Balance: $%d\n",c[i].name,c[i].acc,c[i].bal);
        }
    }
}

void main()
{
    for(int i=0; i<15; i++)
    {
        printf("Enter the details of customer %d \n",i+1);

        printf("Enter name: ");
        fflush(stdin);
        gets(c[i].name);

        printf("Enter account number: ");
        scanf("%d", & c[i].acc );

        printf("Enter balance: $");
        scanf("%d", & c[i].bal );

        printf("\n");
    }
    names();
    addBalance();
}