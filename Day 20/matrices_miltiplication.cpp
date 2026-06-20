#include <iostream>
using namespace std;

int main()
{
    int n;

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

    cout << "Enter values for second Matrix\n";

    int arr2[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter value of (" << (i + 1) << ", " << (j + 1) << ") : ";
            cin >> arr2[i][j];
        }
    }

    int resultant_matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            resultant_matrix[i][j] = sum;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << resultant_matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}