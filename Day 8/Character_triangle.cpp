#include<iostream>
using namespace std;

int main()
{
    int num;
    char c;
    
    cout << "Enter the number : ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        c = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            cout << c;
            c ++;
        }
        cout << endl;
    }
    

    return 0;
}