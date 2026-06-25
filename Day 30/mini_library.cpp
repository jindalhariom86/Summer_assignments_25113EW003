#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 10;

    string bookName[SIZE];
    bool available[SIZE];

    int count = 0, choice;

    do
    {
        cout << "\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            if (count < SIZE)
            {
                cout << "Enter Book Name: ";
                getline(cin, bookName[count]);

                available[count] = true;
                count++;

                cout << "Book added successfully.\n";
            }
            else
            {
                cout << "Library is full.\n";
            }
            break;

        case 2:
            if (count == 0)
            {
                cout << "No books available.\n";
            }
            else
            {
                cout << "\n===== Book List =====\n";

                for (int i = 0; i < count; i++)
                {
                    cout << i + 1 << ". " << bookName[i];

                    if (available[i])
                        cout << " (Available)";
                    else
                        cout << " (Issued)";

                    cout << endl;
                }
            }
            break;

        case 3:
        {
            int bookNo;

            cout << "Enter Book Number to Issue: ";
            cin >> bookNo;

            if (bookNo >= 1 && bookNo <= count)
            {
                if (available[bookNo - 1])
                {
                    available[bookNo - 1] = false;
                    cout << "Book issued successfully.\n";
                }
                else
                {
                    cout << "Book is already issued.\n";
                }
            }
            else
            {
                cout << "Invalid Book Number.\n";
            }

            break;
        }

        case 4:
        {
            int bookNo;

            cout << "Enter Book Number to Return: ";
            cin >> bookNo;

            if (bookNo >= 1 && bookNo <= count)
            {
                if (!available[bookNo - 1])
                {
                    available[bookNo - 1] = true;
                    cout << "Book returned successfully.\n";
                }
                else
                {
                    cout << "Book is already available.\n";
                }
            }
            else
            {
                cout << "Invalid Book Number.\n";
            }

            break;
        }

        case 5:
            cout << "Thank you for using the Mini Library System.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}