#include <iostream>

using namespace std;

int main()
{
    int num, reverse = 0;

    cout << "Enter the number : ";
    cin >> num;
    int temp = num;

    while (temp % 10 != 0)
    {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }
    if (num == reverse)
    {
        cout<<"Given number is Palindrome";
    }
    else
    {
        cout<<"Given number is not Palindrome";
    }
    
    
    

    return 0;
}