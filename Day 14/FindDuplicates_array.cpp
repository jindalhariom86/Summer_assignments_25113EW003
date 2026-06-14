#include <iostream>
using namespace std;

int main()
{
    int num, n;

    cout << "Enter the number of Array inputs : ";
    cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i + 1 << " Array input : ";
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        n = 0;
        int already_checked = 0;

        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                already_checked = 1;
                break;
            }
        }

        if (already_checked)
        {
            continue;
        }

        for (int j = 0; j < num; j++)
        {
            if (arr[i] == arr[j])
            {
                n++;
            }
        }
        
        if (n > 1)
        {
            cout << "Number " << arr[i] << " appears " << n << " times in given array" << endl;
        }
    }

    return 0;
}