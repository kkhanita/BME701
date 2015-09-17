#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); // seed the random number generator
    int theNumber = rand() % 100 + 1; // random number between 1 and 100
    int tries = 0, guess;

    cout << "\tWelcome to Guess My Number!\n\n";

    do
    {
        cout << "Enter a guess: ";
        cin >> guess;
        ++tries;

        if (guess > theNumber)
                cout << "Too high!\n\n";

        if (guess < theNumber)
                cout << "Too low!\n\n";

    } while (guess != theNumber);

    cout << "\nThat's it! You got it in " << tries << " guesses!\n";
    cout << "\nPress Enter to exit.\n";

    cin.ignore(cin.rdbuf()->in_avail() + 1);
    return 0;
}
