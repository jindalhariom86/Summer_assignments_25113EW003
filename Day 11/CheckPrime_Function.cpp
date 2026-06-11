#include <iostream>
using namespace std;

void is_prime(int num)
{
    int isprime = 1;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i== 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime)
    {
        cout << "The given number is Prime";
    }
    else
    {
        cout << "The given number is not Prime";
    }
}

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    is_prime(num);

    return 0;
}