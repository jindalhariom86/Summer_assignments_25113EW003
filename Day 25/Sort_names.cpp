#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of names: ";
    cin >> n;
    cin.ignore();

    char names[n][100], temp[100];

    cout << "Enter the names:\n";
    for (int i = 0; i < n; i++)
    {
        cin.getline(names[i], 100);
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    cout << "\nNames in Alphabetical Order:\n";
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}