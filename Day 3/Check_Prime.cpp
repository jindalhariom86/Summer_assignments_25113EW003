#include <iostream>

using namespace std;

int main()
{
    int num, isprime = 1;

    cout << "Enter number : ";
    cin >> num;
    if (num < 2)
    {
       isprime = 0;
    }
    else
    {

        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }

    if (isprime == 0)
    {
        cout << "Given number is not prime";
    }
    else
    {
        cout << "Given number is Prime";
    }

    return 0;
}
