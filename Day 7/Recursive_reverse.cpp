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

int reverse(int num)
{
    int temp = num, d = 0;

    if (num < 10)
    {
        return num;
    }

    while (temp != 0)
    {
        temp /= 10;
        d++;
    }

    return ((num % 10) * power(10, (d - 1))) + reverse(num / 10);
}

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    // cout << power(10, 5);

    cout << "The reverse value of " << num << " is " << reverse(num);

    return 0;
}