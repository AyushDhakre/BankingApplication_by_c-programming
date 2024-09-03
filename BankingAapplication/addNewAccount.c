#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"structureDec.h"
#include"functionDec.h"
void addNewAccount() {       // Create a new account
    if (accountCount >= MAX_ACCOUNTS) {
        printf("Cannot create more accounts. Maximum limit reached.\n");
        return;
    }

    Account newAccount;
    printf("Enter account number: ");
    scanf_s("%ld", &newAccount.accountNumber); // %ld for long

    printf("Enter customer name (up to 20 characters): ");
    scanf_s("%20s", newAccount.customerName, (unsigned)_countof(newAccount.customerName)); // Correct buffer size

    printf("Enter address (up to 20 characters): ");
    scanf_s("%20s", newAccount.address, (unsigned)_countof(newAccount.address)); // Correct buffer size

    printf("Enter Aadhar number: ");
    scanf_s("%d", &newAccount.adharNo);

    printf("Enter phone number: ");
    scanf_s("%d", &newAccount.phoneNo);

    newAccount.balance = 0.0;  // Initial balance

    accounts[accountCount++] = newAccount;
    printf("Account created successfully.\n");
}


