#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int n = 1;

        for (int j = 0; j < num - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << (k + 1);
        }
        for (int l = 0; l < i; l++)
        {
            cout << (i - l);
        }
        
        cout << "\n";
    }

    return 0;
}