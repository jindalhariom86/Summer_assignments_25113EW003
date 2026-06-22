#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int character_frequency = 0;
    char character;

    cout << "Enter the text : ";
    cin.getline(str, 100);
    
    cout << "Enter the character : ";
    cin >> character;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == character)
        {
            character_frequency++;
        }
    }

    cout << "The given Character frequency = " << character_frequency;

    return 0;
}