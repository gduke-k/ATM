#include <stdio.h>

/* Pin is 2028 */

void interface(){
    printf("\t\tWelcome to ATM service\n");
    printf("\t\tPlease select number in Front of Service you want\n");
    printf("\t\t1. Display the balance in the ATM\n");
    printf("\t\t2. Withdraw money from the ATM\n");
    printf("\t\t3. Deposit money into the ATM\n");
    printf("\t\t4. Exit the ATM\n");
}
int main(){
    int pin,in,am,de;
    char i;
    int bal=25000;
    printf("\n\n\t\t\tWelcome to Our ATM ");
    printf("\n\n\t\tPlease enter your pin - ");
    scanf("%d",&pin);
    while (pin!=2028)
    {
    printf("\t\tPin is Invilid\n\t\tPlease Enter correct pin - ");
    scanf("%d",&pin);
    }
    if (pin==2028)
    {
        printf("\n\tLogin Succesful\n\n");
        Main: interface();
        printf("\n\t\t");
        scanf("%d",&in);
        switch (in)
        {
        case 1:
            printf("\n\t\tBalance remaining in your Bank A/c is %d\n",bal);
            printf("\n\tWould you like to use More of our ATM Services? (Enter y/n)\n\n\t\t");
            scanf(" %c",&i);
            printf("\n");
            if(i=='y'){goto Main;}
            if(i=='n'){printf("\n\tThank you for using our ATM Service\n");}
            break;
        
        case 2:
            printf("\n\tEnter Withdrawal Amount : ");
            scanf("%d",&am);
            if(am<=bal){
                if(am%100==0 ){
                printf("\n\tProcessing Transaction...  ...");
                printf("\n\t\tPlease collect you Cash - %d",am);
                bal=bal-am;
                printf("\t\tRemaining Balance in your Bank A/c is %d\n",bal);
            }
                if(am%100!=0){
                    printf("\n\t\tAmount Entered can not be Withdrawed\n\t\tPlease Enter Amount Divisible by 100\n");
                }
            }
            if(am>bal){
                printf("\n\t\tInsufficient Balance\n");
            }
            printf("\n\tWould you like to use More of our ATM Services? (Enter y/n)\n\n\t\t");
            scanf(" %c",&i);
            printf("\n");
            if(i=='y'){goto Main;}
            if(i=='n'){printf("\n\tThank you for using our ATM Service\n");}
            break;
        
        case 3:
            printf("\n\tEnter Deposit Amount : ");
            scanf("%d",&de);
            printf("\n\n\t\tAmount Recieved - %d",de);
            bal=bal+de;
            printf("\t\tBalance in Bank A/c - %d\n",bal);
            printf("\n\tWould you like to use More of our ATM Services? (Enter y/n)\n\n\t\t");
            scanf(" %c",&i);
            printf("\n");
            if(i=='y'){goto Main;}
            if(i=='n'){printf("\n\tThank you for using our ATM Service\n");}
            break;

        case 4:
            printf("\n\tLogout Succesful");
            printf("\n\tThank you for using our ATM Service");
        }  
    }
 return 0;
}