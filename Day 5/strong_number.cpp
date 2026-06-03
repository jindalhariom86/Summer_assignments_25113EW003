#include <iostream>
using namespace std;

int main()
{
    int num, number_of_digit = 0, factorial = 1, digit, sum_of_factorial = 0;

    cout << "Enter the number : ";
    cin >> num;

    int temp1 = num;
    int temp2 = num;

    if (num > 0)
    {
        while (temp2 != 0)
        {
            digit = temp2 % 10;
            temp2 /= 10;

            for (int i = 1; i <= digit; i++)
            {
                factorial *= i;
            }
            sum_of_factorial += factorial;
            factorial = 1;
        }
        // cout << "The sum of Factorial is : " << sum_of_factorial;
        if (sum_of_factorial == num)
        {
            cout << "The given number is Strong number" << endl;
        }
        else
        {
            cout << "The given number is not Strong number" << endl;
        }
    }

    else
    {
        cout << "The given number is not Strong number" << endl;
    }

    return 0;
}