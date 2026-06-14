#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number of Array inputs : ";
    cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i + 1 << " Array input : ";
        cin >> arr[i];
    }

    if (num < 2)
    {
        cout << "At least 2 elements are required.";
        return 0;
    }

    int max = arr[0];
    int max_index = 0;

    for (int i = 0; i < num; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            max_index = i;
        }
    }

    int sec_max = arr[max_index == 0 ? 1 : 0];

    for (int i = 0; i < num; i++)
    {
        if (max_index == i)
        {
            continue;
        }

        if (sec_max < arr[i])
        {
            sec_max = arr[i];
        }
    }

    cout << "The Second Greatest number is " << sec_max << endl
         << endl;

    return 0;
}