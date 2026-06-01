#include <iostream>
using namespace std;

int power(int base, int expo)
{
    int product = 1;
    for (int i = 0; i < expo; i++)
    {
        product = product * base;
    }
    return product;
}

int main()
{
    int num, temp1, temp2, number_of_digits = 0, armstrong = 0, digit = 0;

    cout << "Enter the number : ";
    cin >> num;

    temp1 = num;
    temp2 = num;
    while (temp1 != 0)
    {
        temp1 = temp1 / 10;
        number_of_digits++;
    }
    // cout << number_of_digits;

    while (temp2 != 0)
    {
        digit = temp2 % 10;
        armstrong = armstrong + power(digit, number_of_digits);
        temp2 = temp2 / 10;
    }

    if (armstrong == num)
    {
        cout << "Given number is armstrong number";
    }
    else
    {
        cout << "Given number is not Armstrong number";
    }

    return 0;
}