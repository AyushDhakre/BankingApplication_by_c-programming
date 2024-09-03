#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"structureDec.h"
#include"functionDec.h"
// Admin Menu
void adminMenu() {
    int choice;

    do {
        printf("\nAdmin Menu:\n");
        printf("1. Add New Account\n");
        printf("2. Delete Account\n");
        printf("3. View All Accounts\n");
        printf("4. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            addNewAccount();
            break;
        case 2:
            deleteAccount();
            break;
        case 3:
            viewAllAccounts();
            break;
        case 4:
            printf("Returning to Main Menu...\n");
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);
}
