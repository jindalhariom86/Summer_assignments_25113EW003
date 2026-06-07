#include <iostream>
using namespace std;

void fibonacci(int a, int b, int n)
{
    if (n == 0)
    {
        return;
    }
    cout << ", " << a;
    fibonacci(b, a + b, n - 1);
}

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    cout << "First " << num << " terms of Fibonacci series are";
    fibonacci(0, 1, num);

    return 0;
}