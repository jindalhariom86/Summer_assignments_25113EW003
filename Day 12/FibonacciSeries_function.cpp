#include <iostream>
using namespace std;

void fiibonacci(int num)
{
    int a = 0, b = 1, c = (a + b);

    if (num == 0)
    {
        cout << a << ", ";
    }
    else if (num == 1)
    {
        cout << a << ", " << b;
    }
    else
    {
        cout << a << ", " << b;
        for (int i = 0; i <= num - 2; i++)
        {
            c = a + b;
            cout << ", " << c;
            a = b;
            b = c;
        }
    }
}

int main()
{
    int num;

    cout << "Enter the  number : ";
    cin >> num;

    fiibonacci(num);

    return 0;
}