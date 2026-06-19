#include <iostream>
using namespace std;

int main()
{
    int n, diagonal_sum = 0;

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

    int resultant_matrix[n][n];

    cout << "<--------Given Matrix-------->\n\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                diagonal_sum += arr1[i][j];
            }
        }
    }

    cout << "Diagonal sum : " << diagonal_sum;

    return 0;
}