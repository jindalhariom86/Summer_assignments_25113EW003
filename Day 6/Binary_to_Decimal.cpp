#include <iostream>
using namespace std;

int power(int a, int b)
{
    int power = 1;
    for (int i = 0; i < b; i++)
    {
        power = power * a;
    }
    return power;
}

int main()
{
    int Binary, rem, decimal = 0, n = 0, invalid_Binary = 0;

    cout << "Enter Binary : ";
    cin >> Binary;

    int temp = Binary;

    while (temp != 0)
    {
        rem = temp % 10;
        temp /= 10;

        if ((rem != 1) && (rem != 0))
        {
            invalid_Binary = 1;
            break;
        }
        decimal = decimal + rem * power(2, n);
        n++;
    }
    if (invalid_Binary)
    {
        cout << "Invalid Binary input" << endl;
    }
    else
    {
        cout << "The Binary to Decimal conversion is : " << decimal;
    }

    return 0;
}