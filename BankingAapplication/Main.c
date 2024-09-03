#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structureDec.h"
#include "functionDec.h"

// Initialize global variables
Account accounts[MAX_ACCOUNTS];
int accountCount = 0;

int main() {
    int choice;

    do {
        printf("1. User Menu\n");
        printf("2. Admin Menu\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            userMenu();
            break;
        case 2:
            adminMenu();
            break;
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
