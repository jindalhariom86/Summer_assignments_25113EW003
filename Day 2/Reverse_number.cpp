#include <iostream>
using namespace std;

int main()
{
    int num, reverse = 0;

    cout << "Enter number : ";
    cin >> num;

    while (num % 10 != 0)
    {
        reverse = (10 * reverse) + (num % 10);
        num = num / 10;
    }
    cout << reverse;

    return 0;
}