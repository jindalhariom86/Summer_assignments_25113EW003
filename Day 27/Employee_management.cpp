#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 100;

    int empId[SIZE];
    string empName[SIZE];
    float empSalary[SIZE];

    int count = 0, choice;

    do
    {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> empId[count];

            cout << "Enter Employee Name: ";
            cin.ignore();
            getline(cin, empName[count]);

            cout << "Enter Employee Salary: ";
            cin >> empSalary[count];

            count++;
            cout << "Employee record added successfully.\n";
            break;

        case 2:
            if (count == 0)
            {
                cout << "\nNo employee records found.\n";
            }
            else
            {
                cout << "\n===== Employee Records =====\n";

                for (int i = 0; i < count; i++)
                {
                    cout << "Employee ID : " << empId[i] << endl;
                    cout << "Name        : " << empName[i] << endl;
                    cout << "Salary      : Rs. " << empSalary[i] << endl;
                    cout << "-----------------------------\n";
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
                    cout << "Salary      : Rs. " << empSalary[i] << endl;

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
            cout << "\nThank you for using the Employee Management System.\n";
            break;

        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}