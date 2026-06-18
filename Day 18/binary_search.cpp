#include <iostream>
using namespace std;

int main()
{
    int num, desired_number;

    cout << "Enter desired number : ";
    cin >> desired_number;

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    num = sizeof(arr) / sizeof(arr[0]);

    int high = num - 1;
    int low = 0;
    int found = -1;

    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == desired_number)
        {
            found = mid;
            break;
        }
        else if (arr[mid] < desired_number)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (found != -1)
    {
        cout << "The index of desired number is : " << found;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}