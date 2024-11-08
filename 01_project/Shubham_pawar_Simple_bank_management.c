// Simple bank management system topic till for loop in c by Shubham pawar

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct BankAccount {
    int accNumber;
    char accHolderName[50];
    float balance;
};


void createAccount(struct BankAccount *accounts, int *numAccounts) {
    printf("Enter account number: ");
    scanf("%d", &accounts[*numAccounts].accNumber);
    printf("Enter account holder name: ");
    scanf("%s", accounts[*numAccounts].accHolderName);
    accounts[*numAccounts].balance = 0.0;
    (*numAccounts)++;
}


void deposit(struct BankAccount *accounts, int numAccounts) {
    int accNumber;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNumber);
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accNumber == accNumber) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("Amount deposited successfully.\n");
            return;
        }
    }
    printf("Account not found.\n");
}


void withdraw(struct BankAccount *accounts, int numAccounts) {
    int accNumber;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNumber);
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accNumber == accNumber) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= accounts[i].balance) {
                accounts[i].balance -= amount;
                printf("Amount withdrawn successfully.\n");
            } else {
                printf("Insufficient balance.\n");
            }
            return;
        }
    }
    printf("Account not found.\n");
}


void displayAccounts(struct BankAccount *accounts, int numAccounts) {
    printf("Account Details:\n");
    for (int i = 0; i < numAccounts; i++) {
        printf("Account Number: %d\n", accounts[i].accNumber);
        printf("Account Holder Name: %s\n", accounts[i].accHolderName);
        printf("Balance: %.2f\n\n", accounts[i].balance);
    }
}

int main() {
    struct BankAccount accounts[100];
    int numAccounts = 0;
    int choice;

    do {
        printf("\nBank Management System\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Display Accounts\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(accounts, &numAccounts);
                break;
            case 2:
                deposit(accounts, numAccounts);
                break;
            case 3:
                withdraw(accounts, numAccounts);
                break;
            case 4:
                displayAccounts(accounts, numAccounts);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
