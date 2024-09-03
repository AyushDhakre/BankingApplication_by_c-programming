#pragma once


#define MAX_ACCOUNTS 100
#define NAME_LENGTH 21

// Structure to store account information
typedef struct {
    long accountNumber;
    char customerName[NAME_LENGTH];
    float balance;
    char address[NAME_LENGTH];
    int adharNo;
    int phoneNo;
} Account;

extern Account accounts[MAX_ACCOUNTS];
extern int accountCount;
