#include <stdio.h>

float balance = 1000;

void deposit() {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    balance = balance + amount;
    printf("Amount deposited successfully.\n");
}

void withdraw() {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= balance) {
        balance = balance - amount;
        printf("Amount withdrawn successfully.\n");
    } else {
        printf("Insufficient balance.\n");
    }
}

void checkBalance() {
    printf("Current Balance = %.2f\n", balance);
}

int main() {
    int choice;

    do {
        printf("\n===== BANK APPLICATION =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                deposit();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                printf("Thank you for using the bank application.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 4);

    return 0;
}