#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number of Arrray inputs : ";
    cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i + 1 << " Array input : ";
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if ((i != j) && (arr[i] == arr[j]))
            {
                for (int d = j; d < num - 1; d++)
                {
                    arr[d] = arr[d + 1];
                }
                num--;
                j--;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        cout << "The value of " << i + 1 << " Array : " << arr[i] << "\n";
    }

    return 0;
}