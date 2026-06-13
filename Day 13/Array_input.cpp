#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number of Arrray inputs : ";
    cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i + 1 << " Array input : ";
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        cout << "The value of " << i + 1 << " Array : " << arr[i] << "\n";
    }
    

    return 0;
}