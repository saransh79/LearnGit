#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
// guess number between 0 to 100. If guess correctly, it will record the number of guess until we get correct answer. If guess wrongly, will give a tips.
// if user guess the number out of the boundaries, the number of guess wouldn't be counted.
int main()
{
    //to ensure that we can get different random numbers every time we run this program
    srand(time(NULL));
    int numberOfGuess = 1;
    int answer;
    int number;
    int lowerlimit = 0;
    int upperlimit = 100;

    number = rand() % 100;
    //first try
    cout << "This is the number guessing game.\n";
    cout << "Guess a number between " << lowerlimit << " and " << upperlimit << ": ";
    cin >> answer;
    //check for boundary for first time
    while (answer <= lowerlimit || answer >= upperlimit)
    {
        cout << "Invalid value. Please make sure that your answer is in between " << lowerlimit << " and " << upperlimit << ".\n\n";
        cout << "Guess a number between " << lowerlimit << " and " << upperlimit << ": ";
        cin >> answer;
    }
    while (answer != number)
    {
        numberOfGuess++;

        if (answer < number) //if user guess lower than the answer, change lowerlimit
        {
            lowerlimit = answer;
            cout << "Oops! Your value is too small. Your answer is incorrect. Please try again.\n\n"; //give the tips
            cout << "Guess a number between " << lowerlimit << " and " << upperlimit << ": ";
            cin >> answer;
        }
        else // if user guess more than the answer, change upperlimitw
        {
            upperlimit = answer;
            cout << "Oops! Your value is too big. Your answer is incorrect. Please try again.\n\n"; //give the tips
            cout << "Guess a number between " << lowerlimit << " and " << upperlimit << ": ";
            cin >> answer;
        }
        while (answer <= lowerlimit || answer >= upperlimit)
        {
            cout << "Invalid value. Please make sure that your answer is in between " << lowerlimit << " and " << upperlimit << ".\n\n";
            cout << "Guess a number between " << lowerlimit << " and " << upperlimit << ": ";
            cin >> answer;
        }
    }
    cout << "\nBingo! Your answer is correct. The number is " << number << endl;
    cout << "The number of guess you used is: " << numberOfGuess << endl;
    cout << "Thank you for playing.\n";
    return 0;
}