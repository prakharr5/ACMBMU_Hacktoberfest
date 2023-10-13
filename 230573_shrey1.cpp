#include <iostream>
#include <string>
using namespace std;
int main() {
    int accountNumbers[10];
    string accountHolders[10];
    double balances[10] = {0};
    int count = 0;

    while (true) {
        cout << "Bank Management System Menu:" << endl;
        cout << "1. Open Account" << endl;
        cout << "2. Show Account Info" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Withdraw" << endl;
        cout << "5. Search Account" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;
switch (choice) {
    case 1: {
      if (count < 10) {
      cout << "Enter account holder name: ";
     cin >> accountHolders[count];
     cout << "Account created successfully." << endl;
     accountNumbers[count] = count + 1; //in this code account numbers will start from 1.
     cout<<"the account number is:"<<accountNumbers[count]<<endl;
        count++;} 
        else {
                    cout << "Cannot open more accounts. Limit reached." << endl;}
                break; }
         case 2: {
            cout << "Enter account number: ";
            int accNum;
            cin >> accNum;
            bool found = false;
            for (int i = 0; i < count; ++i) {
            if (accountNumbers[i] == accNum) {
                cout << "Account Holder Name: " << accountHolders[i] << endl;
                cout << "Balance: $" << balances[i] << endl;
                found = true;
                break; }
                }
                if (!found) {
                    cout << "Account not found." << endl; }
                break;
            }
    case 3: {
      cout << "Enter account number: ";
         int accNum;
         cin >> accNum;
         bool found = false;
            for (int i = 0; i < count; ++i) {
            if (accountNumbers[i] == accNum) {
                cout << "Enter deposit amount: $";
                double amount;
                cin >> amount;
                balances[i] += amount;
                cout << "Deposit successful. New balance: $" << balances[i] << endl;
                found = true;
 break;
 }
     }
     if (!found) {
         cout << "Account not found." << endl;}
     break;
            }
     case 4: {
         cout << "Enter account number: ";
            int accNum;
            cin >> accNum;
            bool found = false;
            for (int i = 0; i < count; ++i) {
            if (accountNumbers[i] == accNum) {
            cout << "Enter withdrawal amount: $";
            double amount;
            cin >> amount;
            if (amount <= balances[i]) {
            balances[i] -= amount;
            cout << "Withdrawal successful. New balance: $" << balances[i] << endl;
    } else {
            cout << "Insufficient balance." << endl;
} found = true;
            break;}
    } if (!found) {
        cout << "Account not found." << endl;}
                break;
            }case 5: {
                cout << "Enter account number: ";
                int accNum;
                cin >> accNum;
                bool found = false;
                for (int i = 0; i < count; ++i) {
                    if (accountNumbers[i] == accNum) {
                        cout << "Account Holder Name: " << accountHolders[i] << endl;
                        cout << "Balance: $" << balances[i] << endl;
                        found = true;
                        break;}
                }
                if (!found) {
                    cout << "Account not found." << endl; }
                break; }
            case 6: {
                cout << "Exiting program. Thank you!" << endl;
                return 0;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    }

    return 0;
}

