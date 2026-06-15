#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number of Arrray inputs : ";
    cin >> num;

    int arr[num], index = 0;

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i + 1 << " Array input : ";
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[index], arr[i]);
            index++;
        }
    }

    cout << "The Array is ";

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}