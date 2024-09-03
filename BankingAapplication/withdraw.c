#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"structureDec.h"
#include"functionDec.h"
// Withdraw money from an account
void withdraw() {
    int accountNumber;
    float amount;
    printf("Enter account number: ");
    scanf_s("%d", &accountNumber);
    printf("Enter amount to withdraw: ");
    scanf_s("%f", &amount);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                printf("Amount withdrawn successfully.\n");
            }
            else {
                printf("Insufficient balance.\n");
            }
            return;
        }
    }
    printf("Account not found.\n");
}