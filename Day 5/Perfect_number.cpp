#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, sum_of_divisors = 0;

    cout << "Enter the number : ";
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum_of_divisors = sum_of_divisors + i;
        }
    }
    if (sum_of_divisors == num && num > 1)
    {
        cout << "The given  number is Perfect number" << endl;
    }
    else
    {
        cout << "The given number is not Perfect number" << endl;
    }
    
    
    cout<< "The sum of Divisors is : " << sum_of_divisors;

    return 0;
}