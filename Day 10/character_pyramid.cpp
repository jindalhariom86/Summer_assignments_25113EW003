#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        char ch = 'A' - 1;

        for (int j = 0; j < num - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            ch++;
            cout << ch;
        }
        for (int l = 0; l < i; l++)
        {
            cout << char(ch - 1);
            ch--;
        }
        
        cout << "\n";
    }

    return 0;
}