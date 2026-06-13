#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number of Arrray inputs : ";
    cin >> num;

    int arr[num];
    int max = arr[0], min = arr[0];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i + 1 << " Array input : ";
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "The maximum value of Array is " << max << endl;
    cout << "The minimum value of Array is " << min;

    return 0;
}