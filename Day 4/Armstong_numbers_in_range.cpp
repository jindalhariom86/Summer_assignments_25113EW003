#include <iostream>
#include <cmath>
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
    int range, armstrong, number_of_digits, digit;

    cout << "Enter the Range : ";
    cin >> range;

    for (int i = 1; i <= range; i++)
    {
        int temp1 = i;
        int temp2 = i;
        number_of_digits = 0;
        armstrong = 0;

        while (temp1 != 0)
        {
            temp1 = temp1 / 10;
            number_of_digits++;
        }
        // cout << "The number of digits are : " << number_of_digits << endl;

        while (temp2 != 0)
        {
            digit = temp2 % 10;
            armstrong = armstrong + power(digit, number_of_digits);
            temp2 = temp2 / 10;
        }

        if (armstrong == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}