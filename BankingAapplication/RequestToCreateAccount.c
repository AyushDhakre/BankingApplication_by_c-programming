#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"structureDec.h"
#include"functionDec.h"
void requestToCreateAccount() {
    if (accountCount >= MAX_ACCOUNTS) {
        printf("Cannot create more accounts. Maximum limit reached.\n");
        return;
    }

    Account newAccount;
    printf("Enter customer name (up to 20 characters): ");
    scanf_s("%20s", newAccount.customerName, (unsigned)_countof(newAccount.customerName));
    printf("Enter address (up to 20 characters): ");
    scanf_s("%20s", newAccount.address, (unsigned)_countof(newAccount.address));
    printf("Enter Aadhar number: ");
    scanf_s("%d", &newAccount.adharNo);
    printf("Enter phone number: ");
    scanf_s("%10d", &newAccount.phoneNo);

    newAccount.accountNumber = accountCount + 1;
    newAccount.balance = 0.0;

    accounts[accountCount++] = newAccount;
    printf("Account created successfully.\n");
}