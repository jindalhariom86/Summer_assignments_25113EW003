#include <iostream>
using namespace std;

bool palindrome(int num)
{
    int rev = 0, rem, temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }

    if (rev == num)
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

    if (palindrome(num))
    {
        cout << "The given number is Palindrome";
    }
    else
    {
        cout << "The given number is not Palindrome";
    }
    return 0;
}