#include <stdio.h>
#include <string.h>
union BankAccount {
    int accountNumber;
    char accountHolder[50];
    float balance;
};

int main() {
    union BankAccount acc;
    int choice;
    printf("Bank Account Information\n");
    printf("1. Enter Account Number\n2. Enter Account Holder Name\n3. Enter Balance\nEnter choice: ");
    scanf("%d", &choice);
    getchar(); 
    switch(choice) {
        case 1:
            printf("Enter Account Number: ");
            scanf("%d", &acc.accountNumber);
            printf("Stored Account Number: %d\n", acc.accountNumber);
            break;
        case 2:
            printf("Enter Account Holder Name: ");
            fgets(acc.accountHolder, sizeof(acc.accountHolder), stdin);
            acc.accountHolder[strcspn(acc.accountHolder, "\n")] = '\0'; 
            printf("Stored Account Holder Name: %s\n", acc.accountHolder);
            break;
        case 3:
            printf("Enter Balance: ");
            scanf("%f", &acc.balance);
            printf("Stored Balance: %.2f\n", acc.balance);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
