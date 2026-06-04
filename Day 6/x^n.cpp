#include <iostream>
using namespace std;

int main()
{
    int x, n, power = 1;

    cout << "Enter the value of X : ";
    cin >> x;

    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        power *= x;
    }
    cout << "X^n is : " << power;

    return 0;
}