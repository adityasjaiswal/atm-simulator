#include <stdio.h>
#include <stdlib.h>

int main() {
    int balance = 10000;
    int pin = 1234;
    int entered_pin;
    int option, amount, new_pin, confirm_pin;
    
    printf("Welcome to Bank ATM Machine!\n");
    
    while (1) {
        printf("\nPlease enter your PIN: ");
        scanf("%d", &entered_pin);
        
        if (entered_pin != pin) {
            printf("Invalid PIN! Please try again.\n");
            printf("Thank you for using Bank ATM Machine.\n");
            continue;
        }
        
        printf("\nPlease choose an option:\n");
        printf("1. View balance\n");
        printf("2. Withdraw money\n");
        printf("3. Deposit money\n");
        printf("4. Change PIN\n");
        printf("5. Exit\n");
        printf("Option: ");
        scanf("%d", &option);
        
        switch (option) {
            case 1:
                printf("Your current balance is %d.\n", balance);
                printf("Thank you for using Bank ATM Machine.\n");
                break;
            case 2:
                printf("Enter the amount you want to withdraw: ");
                scanf("%d", &amount);
                if (amount < 0) {
                    printf("Invalid input!\n");
                    printf("Thank you for using Bank ATM Machine.\n");
                } else if (amount > balance) {
                    printf("Insufficient balance!\n");
                    printf("Thank you for using Bank ATM Machine.\n");
                } else {
                    balance -= amount;
                    printf("Please collect your %d.\n", amount);
                    printf("Your current balance is %d.\n", balance);
                    printf("Thank you for using Bank ATM Machine.\n");
                }
                break;
            case 3:
                printf("Enter the amount you want to deposit: ");
                scanf("%d", &amount);
                
                if (amount < 0) {
                    printf("Invalid input!\n");
                    printf("Thank you for using Bank ATM Machine.\n");
                } else {
                    balance += amount;
                    printf("%d has been deposited into your account.\n", amount);
                    printf("Your current balance is %d.\n", balance);
                    printf("Thank you for using Bank ATM Machine.\n");
                }
                break;
            case 4:
                printf("Enter your new PIN: ");
                scanf("%d", &new_pin);
                printf("Confirm your new PIN: ");
                scanf("%d", &confirm_pin);
                if (new_pin == confirm_pin) {
                    pin = new_pin;
                    printf("Your PIN has been changed successfully!\n");
                    printf("Thank you for using Bank ATM Machine.\n");
                } else {
                    printf("PINs do not match!\n");
                    printf("Thank you for using Bank ATM Machine.\n");
                }
                break;
            case 5:
                printf("Thank you for using Bank ATM Machine.\n");
                exit(0);
            default:
                printf("Invalid option!\n");
                printf("Thank you for using Bank ATM Machine.\n");
        }
    }
    
    return 0;
}
