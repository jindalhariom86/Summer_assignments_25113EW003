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

    int resultant[num1 + num2];

    for (int i = 0; i < num1; i++)
    {
        resultant[i] = arr1[i];
    }
    
    for (int i = 0; i < num2; i++)
    {
        resultant[num1 + i] = arr2[i];
    }

    for (int i = 0; i < num1 + num2; i++)
    {
        cout << resultant[i] << " ";
    }
    

    return 0;
}