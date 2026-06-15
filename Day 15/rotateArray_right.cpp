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

    for (int i = num - 1; i > 0; i--)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = temp;
    }

    cout << "The Array is ";

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}