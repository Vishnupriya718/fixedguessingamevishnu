
/*
    Guessing Game
    Rules:
    1. The computer chooses a random number between 0 and 100.
    2. The player keeps guessing until they find the correct number.
    3. After each guess, the game tells the player if the guess is too high or too low.
*/

/* C++ rules
   C++, as a rule, does not clear variables
   C++ does not check if you go off the end of an array.
   Macs sometimes auto-include <cstring> and initialize pointers to NULL
*/

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    srand(time(0));          // seed random number generator
    bool stillplaying = true;
    char playagain;

    while (stillplaying) {

        int number = rand() % 101;   // random number 0–100
        int guess;
        int attempts = 0;            // track number of guesses

        // --- GAME LOOP ---
        do {
            cout << "Enter your estimate: ";
            cin >> guess;

            attempts++;  // count every guess

            if (guess < number) {
                cout << "Your estimate is less than the number." << endl;
            }
            else if (guess > number) {
                cout << "Your estimate is more than the number!" << endl;
            }
            else {
                cout << "Your guess is right!" << endl;
            }

        } while (guess != number);

        cout << "You got it in " << attempts << " guesses!" << endl;

        // Ask to play again
        cout << "Do you want to play again (y/n): ";
        cin >> playagain;

        stillplaying = (playagain == 'y' || playagain == 'Y');
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}
