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
            cout << n;
            n++;
        }
        cout << "\n";
        
    }
    return 0;

}