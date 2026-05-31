#include <iostream>
using namespace std;

int main()
{
    int num1, num2, GCD, LCM;
    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter second number : ";
    cin >> num2;

    for (int i = 1; i <= min(num1, num2); i++)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            GCD = i;
        }
    }

    LCM = (num1 * num2) / GCD;
    cout << "LCM is : " << LCM;

    return 0;
}