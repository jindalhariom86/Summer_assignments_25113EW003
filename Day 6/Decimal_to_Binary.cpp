#include <iostream>
using namespace std;

int power(int a, int n)
{
    int pro = 1;

    for (int i = 0; i < n; i++)
    {
        pro = pro * a;
    }
    return pro;
}
int main()
{
    int num, rem, n = 0, binary = 0;

    cout << "Enter the number : ";
    cin >> num;

    int temp = num;

    while (temp != 0)
    {
        rem = temp % 2;
        temp /= 2;
        binary = binary + rem * (power(10, n));
        n++;
    }
    cout << "The Binary convertion of " << num << " is " << binary << endl;

    return 0;
}