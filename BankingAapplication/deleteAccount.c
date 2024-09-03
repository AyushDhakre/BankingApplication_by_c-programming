#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"structureDec.h"
#include"functionDec.h"
// Delete an account
void deleteAccount() {
    int accountNumber;
    printf("Enter account number to delete: ");
    scanf_s("%d", &accountNumber);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            for (int j = i; j < accountCount - 1; j++) {
                accounts[j] = accounts[j + 1];
            }
            accountCount--;
            printf("Account deleted successfully.\n");
            return;
        }
    }
    printf("Account not found.\n");
}
