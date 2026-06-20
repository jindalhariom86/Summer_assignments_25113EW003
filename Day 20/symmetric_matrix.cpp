#include <iostream>
using namespace std;

int main()
{
    int n, IsSymmetric = 1;

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

    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            if (arr1[i][j] != arr1[j][i])
            {
                IsSymmetric = 0;
                break;
            }
        }
        if (IsSymmetric == 0)
        {
            break;
        }
    }

    if (IsSymmetric)
    {
        cout << "The given Matrix is Symmetric Matrix\n";
    }
    else
    {
        cout << "The given Matrix is Asymmetric Matrix\n";
    }

    return 0;
}