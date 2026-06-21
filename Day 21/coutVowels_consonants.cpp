#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0, count_vowels = 0, count_consonants = 0;

    cout << "Enter the text : ";
    cin.getline(str, 100);

    while (str[length] != '\0')
    {
        if ((str[length] >= 'A' && str[length] <= 'Z') ||
            (str[length] >= 'a' && str[length] <= 'z'))
        {
            if (str[length] == 'a' || str[length] == 'e' ||
                str[length] == 'i' || str[length] == 'o' ||
                str[length] == 'u' || str[length] == 'A' ||
                str[length] == 'E' || str[length] == 'I' ||
                str[length] == 'O' || str[length] == 'U')
            {
                count_vowels++;
            }
            else
            {
                count_consonants++;
            }
        }

        length++;
    }

    cout << "Number of vowels : " << count_vowels << endl;
    cout << "Number of consonants : " << count_consonants << endl;

    return 0;
}