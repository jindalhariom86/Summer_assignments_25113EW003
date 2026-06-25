#include <iostream>
#include <string>
using namespace std;

const int SIZE = 100;

int rollNo[SIZE];
string name[SIZE];
float marks[SIZE];
int count = 0;

void addStudent()
{
    if (count >= SIZE)
    {
        cout << "Database is full!\n";
        return;
    }

    cout << "\nEnter Roll Number: ";
    cin >> rollNo[count];

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name[count]);

    cout << "Enter Marks: ";
    cin >> marks[count];

    count++;

    cout << "Student added successfully.\n";
}

void displayStudents()
{
    if (count == 0)
    {
        cout << "No student records found.\n";
        return;
    }

    cout << "\n===== Student Records =====\n";

    for (int i = 0; i < count; i++)
    {
        cout << "Roll No : " << rollNo[i] << endl;
        cout << "Name    : " << name[i] << endl;
        cout << "Marks   : " << marks[i] << endl;
        cout << "--------------------------\n";
    }
}

void searchStudent()
{
    int searchRoll;
    bool found = false;

    cout << "\nEnter Roll Number: ";
    cin >> searchRoll;

    for (int i = 0; i < count; i++)
    {
        if (rollNo[i] == searchRoll)
        {
            cout << "\nStudent Found\n";
            cout << "Roll No : " << rollNo[i] << endl;
            cout << "Name    : " << name[i] << endl;
            cout << "Marks   : " << marks[i] << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student not found.\n";
    }
}

void updateMarks()
{
    int searchRoll;
    bool found = false;

    cout << "\nEnter Roll Number: ";
    cin >> searchRoll;

    for (int i = 0; i < count; i++)
    {
        if (rollNo[i] == searchRoll)
        {
            cout << "Enter New Marks: ";
            cin >> marks[i];

            cout << "Marks updated successfully.\n";

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student not found.\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Marks\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateMarks();
            break;

        case 5:
            cout << "Thank you!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}