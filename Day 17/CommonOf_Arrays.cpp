#include <iostream>
using namespace std;

int main()
{
    int num1, num2, rsindex = 0;

    cout << "Enter the number of Array inputs in first Array : ";
    cin >> num1;

    int arr1[num1];

    for (int i = 0; i < num1; i++)
    {
        cout << "Enter the " << i + 1 << " Array input : ";
        cin >> arr1[i];
    }

    cout << "Enter the number of Array inputs in second Array : ";
    cin >> num2;

    int arr2[num2];

    for (int i = 0; i < num2; i++)
    {
        cout << "Enter the " << i + 1 << " Array input : ";
        cin >> arr2[i];
    }

    int resultant[min(num1, num2)];
    
    for (int i = 0; i < num1; i++)
    {
        int already_used = 0;
        for (int k = 0; k < rsindex; k++)
        {
            if (arr1[i] == resultant[k])
            {
                already_used = 1;
                break;
            }
        }

        if (already_used)
        {
            continue;
        }
        

        for (int j = 0; j < num2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                resultant[rsindex] = arr1[i];
                rsindex++;
                break;
            }
        }
    }

    for (int i = 0; i < rsindex; i++)
    {
        cout << resultant[i] << " ";
    }

    return 0;
}