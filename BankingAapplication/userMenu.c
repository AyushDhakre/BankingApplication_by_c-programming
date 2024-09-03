#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structureDec.h"
#include "functionDec.h"
void userMenu()
{
    int choice;

    do {
        printf("\nUser Menu:\n");
        printf("1. Request To Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. View Account Details\n");
        printf("6. Request To Delete Account\n");
        printf("7. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            requestToCreateAccount();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            checkBalance();
            break;
        case 5:
            viewAccountDetails();
            break;
        case 6:
            requestToDeleteAccount();
            break;
        case 7:
            printf("Returning to Main Menu...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);
}








