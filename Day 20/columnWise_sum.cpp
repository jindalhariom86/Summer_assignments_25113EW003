#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter the Dimension of square Matrices : ";
    cin >> n;

    cout << "Enter values for first Matrix\n";

    int arr1[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter value of (" << (i + 1) << ", " << (j + 1) << ") : ";
            cin >> arr1[i][j];
        }
    }

    cout << "<--------Given Matrix-------->\n\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << "\n";
    }

    int column_index;

    cout << "\nEnter the column index : ";
    cin >> column_index;

    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        sum += arr1[i][column_index - 1];
    }

    cout << "The sum of " << column_index << " column elements is " << sum;

    return 0;
}