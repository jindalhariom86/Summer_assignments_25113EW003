#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;

    cout <<"Enter number : ";
    cin >> num;

    while (num % 10 != 0)
    {
        sum = sum + (num  % 10);
        num = num / 10;
    }
    cout<<"The sum of Digits is "<< sum;

    return 0;
}