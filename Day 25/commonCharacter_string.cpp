#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    cout << "Common characters are: ";

    for (int i = 0; str1[i] != '\0'; i++)
    {
        for (int j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                cout << str1[i] << " ";
                break; // Prevents printing the same character multiple times for one occurrence
            }
        }
    }

    return 0;
}