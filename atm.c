#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void buffer_clean(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

double gen_bal(){
    double balance;
    printf("input balance here:\n");
    if (scanf(" %lf",&balance)==1){
        buffer_clean();
        return balance;
    }
    else {
        buffer_clean();
        printf("3 chances remaining before session termination!\n");
        for (int i=0; i<3; i++){
            printf("please input a valid amount: ");
            if (scanf("%lf",&balance)==1){
                buffer_clean();
                break;
            }
            buffer_clean();
            if (i == 2) {
                printf("session terminated.\n");
                printf("Thank you for using our services!\n");
                exit(0);
            }
        }
        return balance;
    }
}
void instructions()
{
    printf("==========WELCOME TO THE BANK!!!==========\n");
    printf("your available choices are:\n");
    printf("1. check balance\n");
    printf("2. deposit money\n");
    printf("3. withdraw money\n");

}
void get_choice(char* choice, int size){
    printf("please enter your choice:\n");
    fgets(choice,100,stdin);
    choice[strcspn(choice,"\n")]='\0';
}

void show_balance(double balance){
    printf("your current balance is: %lf\n",balance);
}

void deposit_bal(double *balance){
    double deposit_amt;
    printf("Enter the amount to be deposited:");
    scanf("%lf",&deposit_amt);
    buffer_clean();
    *balance += deposit_amt;
    printf("your new balance is %lf\n", *balance);

}

void withdraw_bal(double *balance){
    double withdraw_amt;
    printf("input the amount to be withdrawn from the acc:");
    scanf("%lf",&withdraw_amt);
    buffer_clean();
    while (withdraw_amt > *balance) {
        printf("ERROR! The amount exceeds the bank balance. please enter a valid amount\n");
        printf("input the amount to be withdrawn from the acc: ");
        scanf("%lf", &withdraw_amt);
        buffer_clean();
    }
    *balance=*balance-withdraw_amt;
    printf("your new balance is %lf\n",*balance);
}

int main() {
    double balance=gen_bal();
    char ans[10]="yes";
    while (strcmp(ans,"yes")==0){
        instructions();
        char choice[100];
        get_choice(choice,100);
        if (strcmp(choice,"1")==0){
            show_balance(balance);
        }
        else if (strcmp(choice,"2")==0){
            deposit_bal(&balance);
        }
        else if (strcmp(choice,"3")==0) {
            withdraw_bal(&balance);
        }
        else {
            break;
        }

        printf("would you like to run the ATM once again?\n");
        fgets(ans,10,stdin);
        ans[strcspn(ans,"\n")]='\0';
    }
    printf("session terminated.\n");
    printf("Thank you for using our services!\n");
    return 0;
}
