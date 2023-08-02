#include<stdio.h>
#include<conio.h>
long amount=10000,deposit,withdrawl;
int choice, pin , x;
char transaction='y';


void main(){
    printf("\n**********PLEASE INSERT YOUR CARD*********\n");
    
    printf("PLEASE WAIT YOUR TRANSACTION IS RUNNING--------->\n\n");

    while(pin!= 2003){
        printf("Please Enter your Pin\n");
        scanf("%d",&pin);
        if(pin!= 2003){
            printf("You have Entered the wrong pin\n");
            printf("Enter the correct pin\n");
            printf("Please Remove your card");
            break;
        }
        do{
            printf("**********************WELCOME TO ATM SERVICE**********************\n");
            printf("Press 1 : TO check Balance\n");
            printf("Press 2 : TO Withdraw cash\n");
            printf("Press 3 : TO Deposit cash\n");
            printf("Press 4 : TO Exit\n");
            printf("**********************ATM SERVICE**********************\n");

            printf("Enter your choice\n");
            scanf("%d",&choice);

            switch (choice)
            {
            case 1:
            printf("\nYour Balance is %lu Rs.",amount);
                break;

             case 2:
            printf("\nEnter the Amount to withdraw:\n");
            scanf("%lu",&withdrawl);

            if(withdrawl%100!=0){
                printf("\nPlease Enter the amount in multiple of 100");
            
            }
            else if (withdrawl>10000)
            printf("\n Please enter the amount below or equal to 10000");

            else if(withdrawl>amount){
                printf("\nSorry You Have Entered Insufficient amount");

            }
            else{
                amount=amount-withdrawl;
                printf("\n*******Please Collect Your Cash*******\n");
                printf("Your Current Balance is :%lu\n",amount);
            }
                break;

            case 3:
            printf("\nEnter the Amount to Deposit\n");
            scanf("%lu",&deposit);
            amount= amount+deposit;
            printf("Your Current Balance is :%lu",amount);
            break;
            case 4:
            printf("\nThank you For Using Atm Service\n");
            break;
            
            default:
            printf("\n**********Invaild Choice********\n");
                break;
            }
             
           
            printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSACTION (Y/N):\n");
            fflush(stdin);
            scanf("%c",&transaction);
           
           if(transaction=='n'|| transaction=='N')
            x=1;
           
        }
        
        while(!x);
        printf("\nTHANKS FOR USING OUR ATM SERVICE\n");
        printf("\nPLEASE REMOVE YOUR CARD\n");
        getch();

    }
}