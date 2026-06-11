#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 0; i < num; i++)
    {
        fact *= i + 1;
    }
    
    return fact;
}

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    cout << "The Factotrial of given number is : " << factorial(num);

    return 0;
}