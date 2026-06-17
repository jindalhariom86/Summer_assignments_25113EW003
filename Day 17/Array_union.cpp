#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

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

    int rsindex = num1 + num2;

    int resultant[rsindex];

    for (int i = 0; i < num1; i++)
    {
        resultant[i] = arr1[i];
    }
    
    for (int i = 0; i < num2; i++)
    {
        resultant[num1 + i] = arr2[i];
    }

    for (int i = 0; i < rsindex; i++)
    {
        for (int j = i + 1; j < rsindex; j++)
        {
            if (resultant[i] == resultant[j])
            {
                for (int d = j; d < rsindex - 1; d++)
                {
                    resultant[d] = resultant[d + 1];
                }
                rsindex--;
                j--;
            }
        }
    }

    for (int i = 0; i < rsindex; i++)
    {
        cout << resultant[i] << " ";
    }
    

    return 0;
}