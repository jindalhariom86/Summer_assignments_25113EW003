#include <iostream>
using namespace std;

int power(int a, int b)
{
    int power = 1;

    for (int i = 0; i < b; i++)
    {
        power *= a;
    }

    return power;
}

bool armstrong(int num)
{
    int sum = 0, n = 0, temp1 = num, temp2 = num, rem;
    while (temp1 != 0)
    {
        n++;
        temp1 /= 10;
    }
    while (temp2 != 0)
    {
        rem = temp2 % 10;
        sum += power(rem, n);
        temp2 /= 10;
    }

    if (sum == num)
    {
        return true;
    }
    return false;
}

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    if (armstrong(num))
    {
        cout << "The given number is Armstrong number";
    }
    else
    {
        cout << "The given number is not Armstrong number";
    }

    return 0;
}