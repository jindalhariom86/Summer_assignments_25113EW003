#include <iostream>
using namespace std;

int main()
{
    int num, n1 = 0, n2 = 0, max_frequency_index = 0;

    cout << endl;
    cout << "Enter the size of Array : ";
    cin >> num;
    cout << endl;

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i + 1 << " Array input : ";
        cin >> arr[i];
    }

    // int arr[11] = {2, 78, 90, 96, 89, 56, 23, 14, 36, 57 ,14};

    for (int j = 0; j < num; j++)
    {
        for (int i = 0; i < num; i++)
        {
            if ((arr[j] == arr[i]))
            {
                n2++;
            }
        }

        if (n2 = n1)
        {
            n1 = n2;
            max_frequency_index = j;
        }

        n2 = 0;
    }

    cout << "The max frequency element is " << arr[max_frequency_index];

    // cout << "The Frequency of the given number " << num << " in Array is : " << n1 << endl << endl;

    return 0;
}