#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << endl;
    cout << "Enter the number to search : ";
    cin >> num;
    cout << endl;

    int arr[11] = {2, 78, 90, 96, 89, 56, 23, 14, 36, 57 ,14};

    for (int i = 0; i < 11; i++)
    {
        if (num == arr[i])
        {
            cout << "The given number " << num << " found!!\nIndex : " << i + 1 << endl << endl;
        }
    }

    return 0;
}