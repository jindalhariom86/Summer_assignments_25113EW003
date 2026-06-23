#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int current_character_frequency = 0, highest_character_frequency = 0, highest_occuring_index = -1;

    cout << "Enter the text : ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int current_character_frequency = 0;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                current_character_frequency++;
            }
        }
        if (current_character_frequency > highest_character_frequency)
        {
            highest_character_frequency = current_character_frequency;
            highest_occuring_index = i;
        }
    }

    cout << "The Highest occuring Character = " << str[highest_occuring_index];
    cout << "Frequency = " << highest_character_frequency;

    return 0;
}