#include <iostream>
#include <iomanip>

using namespace std;


void openAccount(int[], float[], int&);
void showAccountInfo(int[], float[], int);
void deposit(int[], float[], int);
void withdraw(int[], float[], int);
void search(int[], float[], int);

int main() {
    const int MAX_CUSTOMERS = 10;
    int accountNumbers[MAX_CUSTOMERS] = {0};
    float balances[MAX_CUSTOMERS] = {0.0};
    int numberOfCustomers = 0;

    int choice;

    do {
        
        cout << "\nBanking Management System Menu:\n";
        cout << "1. Open Account\n";
        cout << "2. Show Account Information\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. Search\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                openAccount(accountNumbers, balances, numberOfCustomers);
                break;
            case 2:
                showAccountInfo(accountNumbers, balances, numberOfCustomers);
                break;
            case 3:
                deposit(accountNumbers, balances, numberOfCustomers);
                break;
            case 4:
                withdraw(accountNumbers, balances, numberOfCustomers);
                break;
            case 5:
                search(accountNumbers, balances, numberOfCustomers);
                break;
            case 6:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6.\n";
        }

    } while (choice != 6);

    return 0;
}

void openAccount(int accountNumbers[], float balances[], int &numberOfCustomers) {
    if (numberOfCustomers < 10) {
        cout << "Enter account number for customer " << numberOfCustomers + 1 << ": ";
        cin >> accountNumbers[numberOfCustomers];
        cout << "Account opened successfully.\n";
        numberOfCustomers++;
    } else {
        cout << "Cannot open more accounts. Limit reached.\n";
    }
}

void showAccountInfo(int accountNumbers[], float balances[], int numberOfCustomers) {
    if (numberOfCustomers > 0) {
        cout << setw(15) << "Account Number" << setw(15) << "Balance\n";
        for (int i = 0; i < numberOfCustomers; i++) {
            cout << setw(15) << accountNumbers[i] << setw(15) << balances[i] << endl;
        }
    } else {
        cout << "No accounts to display.\n";
    }
}

void deposit(int accountNumbers[], float balances[], int numberOfCustomers) {
    int accountNumber;
    float amount;

    cout << "Enter account number: ";
    cin >> accountNumber;

    for (int i = 0; i < numberOfCustomers; i++) {
        if (accountNumbers[i] == accountNumber) {
            cout << "Enter deposit amount: ";
            cin >> amount;
            balances[i] += amount;
            cout << "Deposit successful. New balance: " << balances[i] << endl;
            return;
        }
    }

    cout << "Account not found.\n";
}

void withdraw(int accountNumbers[], float balances[], int numberOfCustomers) {
    int accountNumber;
    float amount;

    cout << "Enter account number: ";
    cin >> accountNumber;

    for (int i = 0; i < numberOfCustomers; i++) {
        if (accountNumbers[i] == accountNumber) {
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            if (amount <= balances[i]) {
                balances[i] -= amount;
                cout << "Withdrawal successful. New balance: " << balances[i] << endl;
            } else {
                cout << "Insufficient funds.\n";
            }
            return;
        }
    }

    cout << "Account not found.\n";
}

void search(int accountNumbers[], float balances[], int numberOfCustomers) {
    int accountNumber;

    cout << "Enter account number to search: ";
    cin >> accountNumber;

    for (int i = 0; i < numberOfCustomers; i++) {
        if (accountNumbers[i] == accountNumber) {
            cout << "Account found. Balance: " << balances[i] << endl;
            return;
        }
    }

    cout << "Account not found.\n";
}
