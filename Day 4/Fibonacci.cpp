#include <iostream>
using namespace std;

int main()
{
    int num, a = 0, b = 1, c;
    cout << "Enter the number : ";
    cin >> num;

    if (num >= 1)
    {
        cout << a;
    }
    
    if (num >= 2)
    {
        cout << "," << b;
    }
    

    // cout << a << "," << b;

    for (int i = 2; i < num; i++)
    {
        c = a + b;
        cout << "," << c;
        a = b;
        b = c;
    }

    return 0;
}