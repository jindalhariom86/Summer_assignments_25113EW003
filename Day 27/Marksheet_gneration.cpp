#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int rollNo;
    float marks[5], total = 0, percentage;

    cout << "===== Marksheet Generation System =====\n";

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    percentage = total / 5;

    cout << "\n========== MARKSHEET ==========\n";
    cout << "Name       : " << name << endl;
    cout << "Roll No    : " << rollNo << endl;

    cout << "\nSubject-wise Marks:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " : " << marks[i] << endl;
    }

    cout << "\nTotal Marks: " << total << " / 500" << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade      : A+" << endl;
    else if (percentage >= 80)
        cout << "Grade      : A" << endl;
    else if (percentage >= 70)
        cout << "Grade      : B" << endl;
    else if (percentage >= 60)
        cout << "Grade      : C" << endl;
    else if (percentage >= 50)
        cout << "Grade      : D" << endl;
    else
        cout << "Grade      : F" << endl;

    if (percentage >= 40)
        cout << "Result     : PASS" << endl;
    else
        cout << "Result     : FAIL" << endl;

    return 0;
}