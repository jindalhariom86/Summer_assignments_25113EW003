#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < num - i - 1; k++)
        {
            cout << "*";
        }
        for (int l = 0; l < num - i; l++)
        {
            cout << "*";
        }
        
        cout << "\n";
    }

    return 0;
}