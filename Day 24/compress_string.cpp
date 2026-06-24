#include <iostream>
using namespace std;

int main()
{
    string str1;

    cout << "Enter the first String  : ";
    cin >> str1;

    for (int i = 0; i < str1.length(); i++)
    {
        int count = 1;

        while (i < str1.length() - 1 && str1[i] == str1[i + 1])
        {
            count++;
            i++;
        }

        if (count == 1)
        {
            cout << str1[i];
        }
        else
        {
            cout << str1[i] << count;
        }
    }

    return 0;
}