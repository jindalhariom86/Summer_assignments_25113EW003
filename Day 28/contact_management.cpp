#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 100;

    string name[SIZE];
    string phone[SIZE];

    int count = 0, choice;

    do
    {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "\nEnter Contact Name: ";
            getline(cin, name[count]);

            cout << "Enter Phone Number: ";
            getline(cin, phone[count]);

            count++;
            cout << "Contact added successfully.\n";
            break;

        case 2:
            if (count == 0)
            {
                cout << "\nNo contacts found.\n";
            }
            else
            {
                cout << "\n===== Contact List =====\n";

                for (int i = 0; i < count; i++)
                {
                    cout << "Name  : " << name[i] << endl;
                    cout << "Phone : " << phone[i] << endl;
                    cout << "--------------------------\n";
                }
            }
            break;

        case 3:
        {
            string searchName;
            bool found = false;

            cout << "\nEnter Contact Name to Search: ";
            getline(cin, searchName);

            for (int i = 0; i < count; i++)
            {
                if (name[i] == searchName)
                {
                    cout << "\nContact Found\n";
                    cout << "Name  : " << name[i] << endl;
                    cout << "Phone : " << phone[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Contact not found.\n";
            }

            break;
        }

        case 4:
            cout << "\nThank you for using the Contact Management System.\n";
            break;

        default:
            cout << "\nInvalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}