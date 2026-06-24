#include <iostream>
using namespace std;

int main()
{
    string str, word = "", longest_word = "";

    cout << "Enter the text : ";
    getline(cin, str);

    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            word += str[i];
        }
        else
        {
            if (word.length() > longest_word.length())
            {
                longest_word = word;
            }
            word = "";
        }
    }

    cout << "Longest word : " << longest_word;

    return 0;
}