#include<iostream>
using namespace std;

int greatest(int num1,int num2)
{
    if(num1 > num2)
        return num1;
    else if (num2 > num1)
    {
        return num2;
    }
    else return num1 = num2;
    
    // return max(num1, num2);
}

int main ()
{
    int num1, num2;

    cout << "Enter the first number : ";
    cin >> num1;

    cout << "Enter the second number : ";
    cin >> num2;

    cout << "Greatest of both numbers is " << greatest(num1, num2);

    return 0;
}