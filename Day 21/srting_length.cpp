#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0;

    cout << "Enter the text : ";
    cin.getline(str, 100);

    while (str[length] != '\0')
    {
        length++;
    }

    cout << "The string length is : " << length;

    return 0;
}