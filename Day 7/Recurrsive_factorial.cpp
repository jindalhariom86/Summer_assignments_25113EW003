#include <iostream>
using namespace std;

long long factorial(long long num)
{
    if (num <= 1)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int main()
{
    long long num;

    cout << "Enter the number : ";
    cin >> num;

    cout << "The Factorial of " << num << " is " << factorial(num);

    return 0;
}