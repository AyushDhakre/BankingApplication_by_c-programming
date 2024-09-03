#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"structureDec.h"
#include"functionDec.h"
// View details of an account
void viewAccountDetails() {
    int accountNumber;
    printf("Enter account number: ");
    scanf_s("%d", &accountNumber);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Account Number: %ld\n", accounts[i].accountNumber);
            printf("Customer Name: %s\n", accounts[i].customerName);
            printf("Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}

