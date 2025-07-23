#include<stdio.h>
int main(){
    int n;
    int amt=1000,pin=1234,e_pin,e_amt,pin_1,pin_2,n_pin;
    printf("\n1.Deposit\nWithdraw\nBalance enquiry\nPin change");
    printf("\nEnter a value:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Enter pin number to proceed:");
        scanf("%d",&e_pin);
        if(e_pin==pin){
            printf("Enter Amount to deposit:");
            scanf("%d",&e_amt);
            amt=e_amt+amt;
            printf("Current balance:%d",amt);
        }
        else
        printf("Entered wrong pin");
        break;
        case 2:
        printf("\nEnter pin number to proceed:");
        scanf("%d",&e_pin);
        if(e_pin==pin){
            printf("\nEnter amount to withdraw:");
            scanf("%d",&e_amt);
            if(e_amt<=amt){
                amt=amt-e_amt;
                printf("Available balance:%d",amt);
            }
            else
            printf("Insufficient balance");
        }
        else
        printf("Entered wrong pin");
        break;
        case 3:
        printf("Enter pin number to proceed:");
        scanf("%d",&e_pin);
        printf("Available balance:%d",amt);
        break;
        case 4:
        printf("Enter pin number to proceed:");
        scanf("%d",&pin_1);
        printf("Enter pin number again to confirm:");
        scanf("%d",&pin_2);
        if(pin_1==pin_2){
            printf("Enter new pin:");
            scanf("%d",&n_pin);
            pin=n_pin;
            printf("your new pin is %d",pin);
        }
        else
        printf("pin1 doesnt match with pin2");
        break;
        default:
        printf("INvalid option");
        break;
    }
    return 0;
   
}