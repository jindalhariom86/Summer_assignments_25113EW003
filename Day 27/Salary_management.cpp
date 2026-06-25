    #include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 100;

    int empId[SIZE];
    string empName[SIZE];
    float basicSalary[SIZE], netSalary[SIZE];

    int count = 0, choice;

    do
    {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee Salary\n";
        cout << "2. Display Salary Details\n";
        cout << "3. Search Employee Salary\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "\nEnter Employee ID: ";
            cin >> empId[count];

            cout << "Enter Employee Name: ";
            cin.ignore();
            getline(cin, empName[count]);

            cout << "Enter Basic Salary: ";
            cin >> basicSalary[count];

            // Calculate Net Salary
            float hra = basicSalary[count] * 0.20;
            float da = basicSalary[count] * 0.10;
            netSalary[count] = basicSalary[count] + hra + da;

            cout << "Salary record added successfully.\n";
            count++;
            break;
        }

        case 2:
        {
            if (count == 0)
            {
                cout << "\nNo salary records found.\n";
            }
            else
            {
                cout << "\n===== Salary Details =====\n";
                for (int i = 0; i < count; i++)
                {
                    cout << "Employee ID : " << empId[i] << endl;
                    cout << "Name         : " << empName[i] << endl;
                    cout << "Basic Salary : Rs. " << basicSalary[i] << endl;
                    cout << "Net Salary   : Rs. " << netSalary[i] << endl;
                    cout << "-----------------------------\n";
                }
            }
            break;
        }

        case 3:
        {
            int searchId;
            bool found = false;

            cout << "\nEnter Employee ID: ";
            cin >> searchId;

            for (int i = 0; i < count; i++)
            {
                if (empId[i] == searchId)
                {
                    cout << "\nEmployee Found\n";
                    cout << "Employee ID : " << empId[i] << endl;
                    cout << "Name         : " << empName[i] << endl;
                    cout << "Basic Salary : Rs. " << basicSalary[i] << endl;
                    cout << "Net Salary   : Rs. " << netSalary[i] << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Employee record not found.\n";
            }

            break;
        }

        case 4:
            cout << "\nThank you for using the Salary Management System.\n";
            break;

        default:
            cout << "\nInvalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}