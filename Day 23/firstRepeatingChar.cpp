#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter the text : ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int non_repeating = 0;
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if ((i != j) && (str[i] == str[j]))
            {
                non_repeating = 1;
                break;
            }
        }

        if (non_repeating)
        {
            cout << "The first Repeating character : " << str[i];
            break;
        }
    }

    return 0;
}