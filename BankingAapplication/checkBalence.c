#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"structureDec.h"
#include"functionDec.h"
// Check the balance of an account
void checkBalance() {
    int accountNumber;
    printf("Enter account number: ");
    scanf_s("%d", &accountNumber);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Current balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}

