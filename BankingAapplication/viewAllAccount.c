#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"structureDec.h"
#include"functionDec.h"
// View details of all accounts
void viewAllAccounts() {
    if (accountCount == 0) {
        printf("No accounts to display.\n");
        return;
    }

    for (int i = 0; i < accountCount; i++) {
        printf("\nAccount Number: %ld\n", accounts[i].accountNumber);
        printf("Customer Name: %s\n", accounts[i].customerName);
        printf("Balance: %.2f\n", accounts[i].balance);
    }
}
