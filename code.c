#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Account structure
struct Account {
    int accountNumber;
    char name[100];
    float balance;
};

// Function prototypes
void createAccount();
void deposit();
void withdraw();
void checkBalance();
bool accountExists(int accountNum);

int main() {
    int choice;
    
    printf("\n--- Simple Banking System ---\n");
    
    while (1) {
        printf("\n1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: createAccount(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: checkBalance(); break;
            case 5: printf("Exiting...\n"); exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    
    return 0;
}

// Create a new account
void createAccount() {
    struct Account acc;
    FILE *fp = fopen("accounts.dat", "ab+");
    
    printf("\nEnter account number: ");
    scanf("%d", &acc.accountNumber);
    
    if (accountExists(acc.accountNumber)) {
        printf("Account already exists!\n");
        fclose(fp);
        return;
    }
    
    printf("Enter account holder name: ");
    scanf(" %[^\n]%*c", acc.name); // Read full line
    
    printf("Enter initial deposit: ");
    scanf("%f", &acc.balance);
    
    fwrite(&acc, sizeof(struct Account), 1, fp);
    printf("Account created successfully!\n");
    fclose(fp);
}

// Deposit money into an account
void deposit() {
    int accNum;
    float amount;
    
    printf("\nEnter account number: ");
    scanf("%d", &accNum);
    
    if (!accountExists(accNum)) {
        printf("Account not found!\n");
        return;
    }
    
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    
    if (amount <= 0) {
        printf("Invalid amount!\n");
        return;
    }
    
    FILE *fp = fopen("accounts.dat", "rb+");
    struct Account acc;
    bool found = false;
    
    while (fread(&acc, sizeof(struct Account), 1, fp)) {
        if (acc.accountNumber == accNum) {
            found = true;
            acc.balance += amount;
            fseek(fp, -sizeof(struct Account), SEEK_CUR);
            fwrite(&acc, sizeof(struct Account), 1, fp);
            printf("Rs. %.2f deposited successfully!\n", amount);
            break;
        }
    }
    
    fclose(fp);
    if (!found) printf("Error updating account!\n");
}

// Withdraw money from an account
void withdraw() {
    int accNum;
    float amount;
    
    printf("\nEnter account number: ");
    scanf("%d", &accNum);
    
    if (!accountExists(accNum)) {
        printf("Account not found!\n");
        return;
    }
    
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    
    if (amount <= 0) {
        printf("Invalid amount!\n");
        return;
    }
    
    FILE *fp = fopen("accounts.dat", "rb+");
    struct Account acc;
    bool found = false;
    
    while (fread(&acc, sizeof(struct Account), 1, fp)) {
        if (acc.accountNumber == accNum) {
            found = true;
            if (acc.balance < amount) {
                printf("Insufficient balance!\n");
                break;
            }
            acc.balance -= amount;
            fseek(fp, -sizeof(struct Account), SEEK_CUR);
            fwrite(&acc, sizeof(struct Account), 1, fp);
            printf("Rs. %.2f withdrawn successfully!\n", amount);
            break;
        }
    }
    
    fclose(fp);
    if (!found) printf("Error updating account!\n");
}

// Check account balance
void checkBalance() {
    int accNum;
    
    printf("\nEnter account number: ");
    scanf("%d", &accNum);
    
    FILE *fp = fopen("accounts.dat", "rb");
    struct Account acc;
    bool found = false;
    
    while (fread(&acc, sizeof(struct Account), 1, fp)) {
        if (acc.accountNumber == accNum) {
            found = true;
            printf("\n--- Account Details ---\n");
            printf("Account No: %d\n", acc.accountNumber);
            printf("Holder: %s\n", acc.name);
            printf("Balance: Rs. %.2f\n", acc.balance);
            break;
        }
    }
    
    fclose(fp);
    if (!found) printf("Account not found!\n");
}

// Check if an account already exists
bool accountExists(int accountNum) {
    FILE *fp = fopen("accounts.dat", "rb");
    struct Account acc;
    
    while (fread(&acc, sizeof(struct Account), 1, fp)) {
        if (acc.accountNumber == accountNum) {
            fclose(fp);
            return true;
        }
    }
    
    fclose(fp);
    return false;
}
