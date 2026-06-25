#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 10;

    int empId[SIZE];
    string empName[SIZE];
    float salary[SIZE];

    int count = 0, choice;

    do
    {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count < SIZE)
            {
                cout << "\nEnter Employee ID: ";
                cin >> empId[count];

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, empName[count]);

                cout << "Enter Salary: ";
                cin >> salary[count];

                count++;

                cout << "Employee added successfully.\n";
            }
            else
            {
                cout << "Employee list is full.\n";
            }
            break;

        case 2:
            if (count == 0)
            {
                cout << "No employee records found.\n";
            }
            else
            {
                cout << "\n===== Employee Records =====\n";

                for (int i = 0; i < count; i++)
                {
                    cout << "Employee ID : " << empId[i] << endl;
                    cout << "Name        : " << empName[i] << endl;
                    cout << "Salary      : Rs. " << salary[i] << endl;
                    cout << "---------------------------\n";
                }
            }
            break;

        case 3:
        {
            int searchId;
            bool found = false;

            cout << "\nEnter Employee ID to Search: ";
            cin >> searchId;

            for (int i = 0; i < count; i++)
            {
                if (empId[i] == searchId)
                {
                    cout << "\nEmployee Found\n";
                    cout << "Employee ID : " << empId[i] << endl;
                    cout << "Name        : " << empName[i] << endl;
                    cout << "Salary      : Rs. " << salary[i] << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Employee not found.\n";
            }

            break;
        }

        case 4:
            cout << "Thank you for using the Mini Employee Management System.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}