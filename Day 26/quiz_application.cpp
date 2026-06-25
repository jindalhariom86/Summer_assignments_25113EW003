#include <iostream>
using namespace std;

int main()
{
    int answer, score = 0;

    cout << "===== Welcome to the Quiz =====\n\n";

    // Question 1
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is New Delhi.\n\n";
    }

    // Question 2
    cout << "2. Which language is mainly used for Android development?\n";
    cout << "1. Java\n2. Python\n3. C\n4. HTML\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 1)
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is Java.\n\n";
    }

    // Question 3
    cout << "3. How many days are there in a leap year?\n";
    cout << "1. 365\n2. 366\n3. 364\n4. 367\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is 366.\n\n";
    }

    cout << "===== Quiz Finished =====\n";
    cout << "Your Score: " << score << " / 3\n";

    return 0;
}