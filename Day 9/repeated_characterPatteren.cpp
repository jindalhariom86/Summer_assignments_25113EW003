#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;
    
    char n = 'A';

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << n;
        }
        cout << "\n";
        n++;
        
    }
    return 0;

}