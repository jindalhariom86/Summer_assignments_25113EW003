#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int accountNumber;
    double balance = 0, amount;
    int choice;

    cout << "===== Bank Account System =====\n";

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Current Balance: Rs. " << balance << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;

            if (amount > 0)
            {
                balance += amount;
                cout << "Deposit successful.\n";
                cout << "Updated Balance: Rs. " << balance << endl;
            }
            else
            {
                cout << "Invalid amount!\n";
            }
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount > balance)
            {
                cout << "Insufficient balance!\n";
            }
            else if (amount <= 0)
            {
                cout << "Invalid amount!\n";
            }
            else
            {
                balance -= amount;
                cout << "Withdrawal successful.\n";
                cout << "Remaining Balance: Rs. " << balance << endl;
            }
            break;

        case 4:
            cout << "\n===== Account Details =====\n";
            cout << "Account Holder : " << name << endl;
            cout << "Account Number : " << accountNumber << endl;
            cout << "Balance        : Rs. " << balance << endl;
            break;

        case 5:
            cout << "Thank you for using the Bank Account System.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}