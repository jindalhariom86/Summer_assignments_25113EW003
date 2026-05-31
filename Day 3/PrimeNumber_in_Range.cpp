#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Range : ";
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        int isprime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
        {
            cout << i << ",";
        }
    }

    return 0;
}
