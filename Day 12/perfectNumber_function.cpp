#include <iostream>
using namespace std;

bool perfect_number(int num)
{
    int sum = 0;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (num == sum)
    {
        return true;
    }

    return false;
}

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    if (perfect_number(num))
    {
        cout << "The given number is Perfect nunmber";
    }
    else
    {
        cout << "The given number is not Perfect number";
    }

    return 0;
}