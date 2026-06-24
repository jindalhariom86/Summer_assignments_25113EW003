#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter the first String  : ";
    cin >> str1;

    cout << "Enter the second String  : ";
    cin >> str2;

    if (str1.length() != str2.length())
    {
        cout << "Rotation not found!!";
        return 0;
    }
    
    string temp = str1 + str1;

    if (temp.find(str2) != string::npos)
    {
        cout << "Rotation found!!";
    }
    else
    {
        cout << "Rotation not found!!";
    }
    
    

    return 0;
}