#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 100;

    int bookId[SIZE];
    string bookName[SIZE];
    string author[SIZE];
    bool issued[SIZE];

    int count = 0, choice;

    do
    {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Book ID: ";
            cin >> bookId[count];

            cin.ignore();

            cout << "Enter Book Name: ";
            getline(cin, bookName[count]);

            cout << "Enter Author Name: ";
            getline(cin, author[count]);

            issued[count] = false;

            count++;
            cout << "Book added successfully.\n";
            break;

        case 2:
            if (count == 0)
            {
                cout << "\nNo books available.\n";
            }
            else
            {
                cout << "\n===== Book List =====\n";

                for (int i = 0; i < count; i++)
                {
                    cout << "Book ID : " << bookId[i] << endl;
                    cout << "Book    : " << bookName[i] << endl;
                    cout << "Author  : " << author[i] << endl;
                    cout << "Status  : ";

                    if (issued[i])
                        cout << "Issued";
                    else
                        cout << "Available";

                    cout << "\n--------------------------\n";
                }
            }
            break;

        case 3:
        {
            int id;
            bool found = false;

            cout << "\nEnter Book ID to Issue: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (bookId[i] == id)
                {
                    found = true;

                    if (!issued[i])
                    {
                        issued[i] = true;
                        cout << "Book issued successfully.\n";
                    }
                    else
                    {
                        cout << "Book is already issued.\n";
                    }

                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 4:
        {
            int id;
            bool found = false;

            cout << "\nEnter Book ID to Return: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (bookId[i] == id)
                {
                    found = true;

                    if (issued[i])
                    {
                        issued[i] = false;
                        cout << "Book returned successfully.\n";
                    }
                    else
                    {
                        cout << "Book was not issued.\n";
                    }

                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 5:
            cout << "\nThank you for using the Library Management System.\n";
            break;

        default:
            cout << "\nInvalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}