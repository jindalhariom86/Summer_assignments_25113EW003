#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 100;

    int roll[SIZE];
    string name[SIZE];
    float marks[SIZE];

    int count = 0, choice;

    do
    {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> roll[count];

            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name[count]);

            cout << "Enter Marks: ";
            cin >> marks[count];

            count++;
            cout << "Student record added successfully.\n";
            break;

        case 2:
            if (count == 0)
            {
                cout << "\nNo records found.\n";
            }
            else
            {
                cout << "\nStudent Records:\n";
                cout << "-------------------------------------\n";

                for (int i = 0; i < count; i++)
                {
                    cout << "Roll No : " << roll[i] << endl;
                    cout << "Name    : " << name[i] << endl;
                    cout << "Marks   : " << marks[i] << endl;
                    cout << "-------------------------------------\n";
                }
            }
            break;

        case 3:
        {
            int searchRoll;
            bool found = false;

            cout << "\nEnter Roll Number to Search: ";
            cin >> searchRoll;

            for (int i = 0; i < count; i++)
            {
                if (roll[i] == searchRoll)
                {
                    cout << "\nStudent Found\n";
                    cout << "Roll No : " << roll[i] << endl;
                    cout << "Name    : " << name[i] << endl;
                    cout << "Marks   : " << marks[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Student record not found.\n";
            }

            break;
        }

        case 4:
            cout << "\nThank you!\n";
            break;

        default:
            cout << "\nInvalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}