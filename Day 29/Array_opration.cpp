#include <iostream>
using namespace std;

int main()
{
    int n, choice;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n===== ARRAY OPERATIONS MENU =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Maximum Element\n";
        cout << "3. Find Minimum Element\n";
        cout << "4. Calculate Sum\n";
        cout << "5. Calculate Average\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Array Elements: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 2:
        {
            int max = arr[0];
            for (int i = 1; i < n; i++)
            {
                if (arr[i] > max)
                    max = arr[i];
            }
            cout << "Maximum Element: " << max << endl;
            break;
        }

        case 3:
        {
            int min = arr[0];
            for (int i = 1; i < n; i++)
            {
                if (arr[i] < min)
                    min = arr[i];
            }
            cout << "Minimum Element: " << min << endl;
            break;
        }

        case 4:
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            cout << "Sum = " << sum << endl;
            break;
        }

        case 5:
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            cout << "Average = " << (float)sum / n << endl;
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