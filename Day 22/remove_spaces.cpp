#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int index = 0;

    cout << "Enter the text : ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[index] = str[i];
            index++;
        }
    }

    str[index] = '\0';

    cout << "String after removing spaces : " << str;

    return 0;
}