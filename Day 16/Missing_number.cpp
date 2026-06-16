#include <iostream>
using namespace std;

int main()
{
    int num, arr_sum = 0, expected_sum = 0;

    cout << "Enter n (numbers are from 1 to n): ";
    cin >> num;

    int arr[num - 1];

    for (int i = 0; i < num - 1; i++)
    {
        cout << "Enter the Array input : ";
        cin >> arr[i];
    }

    for (int i = 0; i < num - 1; i++)
    {
        arr_sum += arr[i];
    }

    expected_sum = num * (num + 1) / 2;

    int missing_number = expected_sum - arr_sum;

    cout << "The missing number is : " << missing_number;

    return 0;
}