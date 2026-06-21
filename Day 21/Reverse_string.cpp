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

    for (int i = 0; i < (length) / 2; i++)
    {
        char temp;
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    

    cout << "The reversed String is : " << str;

    return 0;
}