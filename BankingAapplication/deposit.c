#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"structureDec.h"
#include"functionDec.h"
// Deposit money into an account
void deposit() {
    int accountNumber;
    float amount;
    printf("Enter account number: ");
    scanf_s("%d", &accountNumber);
    printf("Enter amount to deposit: ");
    scanf_s("%f", &amount);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            accounts[i].balance += amount;
            printf("Amount deposited successfully.\n");
            return;
        }
    }
    printf("Account not found.\n");
}



