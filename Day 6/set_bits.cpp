#include <iostream>
using namespace std;

int main()
{
    int num, rem, count = 0;

    cout << "Enter the number : ";
    cin >> num;

    while (num != 0)
    {
        if (num % 2 == 1)
        {
            count ++;
        }
        num = num / 2;
    }
    cout << "The number of set bits is " << count;

    return 0;
}