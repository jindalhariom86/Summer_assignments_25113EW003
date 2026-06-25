#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    int choice;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    do
    {
        cout << "\n===== STRING OPERATIONS MENU =====\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Convert to Lowercase\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "String: " << str << endl;
            break;

        case 2:
            cout << "Length = " << strlen(str) << endl;
            break;

        case 3:
        {
            char rev[100];
            strcpy(rev, str);

            int len = strlen(rev);

            for (int i = 0; i < len / 2; i++)
            {
                char temp = rev[i];
                rev[i] = rev[len - i - 1];
                rev[len - i - 1] = temp;
            }

            cout << "Reversed String: " << rev << endl;
            break;
        }

        case 4:
        {
            char upper[100];
            strcpy(upper, str);

            for (int i = 0; upper[i] != '\0'; i++)
            {
                if (upper[i] >= 'a' && upper[i] <= 'z')
                {
                    upper[i] = upper[i] - 32;
                }
            }

            cout << "Uppercase: " << upper << endl;
            break;
        }

        case 5:
        {
            char lower[100];
            strcpy(lower, str);

            for (int i = 0; lower[i] != '\0'; i++)
            {
                if (lower[i] >= 'A' && lower[i] <= 'Z')
                {
                    lower[i] = lower[i] + 32;
                }
            }

            cout << "Lowercase: " << lower << endl;
            break;
        }

        case 6:
            cout << "Exiting the program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}