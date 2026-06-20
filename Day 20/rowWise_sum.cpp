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

    int row_index;

    cout << "\nEnter the row index : ";
    cin >> row_index;

    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        sum += arr1[row_index - 1][i];
    }

    cout << "The sum of " << row_index << " row elements is " << sum;

    return 0;
}