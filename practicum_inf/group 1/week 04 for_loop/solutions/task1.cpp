#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned int secretNumber;
    unsigned int currentGuess;
    int numberOfGuesses = 0;

    cout << "Secret number: ";
    cin >> secretNumber;

    for (int i = 0; i < 50; ++i)
    {
        cout << "\n";
    }

    do
    {
        cout << "Enter a guess: ";
        cin >> currentGuess;
        ++numberOfGuesses;

        if (currentGuess < secretNumber)
        {
            cout << "The secret number is bigger than " << currentGuess << "\n";
        }
        else if (currentGuess > secretNumber)
        {
            cout << "The secret number is smaller than " << currentGuess << "\n";
        }
    } while (currentGuess != secretNumber);

    cout << "Congratulations! You guessed that "
         << secretNumber << "is the secret number.\nIt took you "
         << numberOfGuesses << "tries.\n";

    return 0;
}