#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 100;

    int rollNo[SIZE];
    string name[SIZE];
    float marks[SIZE];

    int count = 0, choice;

    do
    {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> rollNo[count];

            cin.ignore();

            cout << "Enter Student Name: ";
            getline(cin, name[count]);

            cout << "Enter Marks: ";
            cin >> marks[count];

            count++;
            cout << "Student record added successfully.\n";
            break;

        case 2:
            if (count == 0)
            {
                cout << "\nNo student records found.\n";
            }
            else
            {
                cout << "\n===== Student Records =====\n";

                for (int i = 0; i < count; i++)
                {
                    cout << "Roll Number : " << rollNo[i] << endl;
                    cout << "Name        : " << name[i] << endl;
                    cout << "Marks       : " << marks[i] << endl;
                    cout << "----------------------------\n";
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
                if (rollNo[i] == searchRoll)
                {
                    cout << "\nStudent Found\n";
                    cout << "Roll Number : " << rollNo[i] << endl;
                    cout << "Name        : " << name[i] << endl;
                    cout << "Marks       : " << marks[i] << endl;

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
            cout << "\nThank you for using the Student Record System.\n";
            break;

        default:
            cout << "\nInvalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}