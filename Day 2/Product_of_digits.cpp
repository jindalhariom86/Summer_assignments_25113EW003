#include <iostream>
using namespace std;

int main()
{
    int num, product = 1;

    cout << "Enter the number : ";
    cin >> num;

    while (num % 10 != 0)
    {
        product = product * (num % 10);
        num = num / 10;
    }
    cout << "Product of digits is " << product << endl;

    return 0;
}