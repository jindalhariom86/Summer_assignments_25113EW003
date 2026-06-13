#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number of Arrray inputs : ";
    cin >> num;

    int arr[num];
    int even_count = 0, odd_count = 0;

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i + 1 << " Array input : ";
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        if (arr[i] % 2 != 0)
        {
            odd_count++;
        }
    }

    cout << "The number of Even element : " << even_count << endl;
    cout << "The number of Odd element : " << odd_count << endl;

    return 0;
}