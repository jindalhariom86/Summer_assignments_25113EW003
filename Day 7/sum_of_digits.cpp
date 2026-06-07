#include <iostream>
using namespace std;

int sum_of_digits(int num)
{
    if (num < 0)
    {
        num = -num;
    }
    
    if (num == 0)
    {
        return 0;
    }
    
    return (num % 10) + sum_of_digits(num / 10);
}

int main()
{
    int num;
    
    cout << "Enter the number : ";
    cin >> num;

    cout << "The sum of digits of " << num << " is " << sum_of_digits(num);

    return 0;
}