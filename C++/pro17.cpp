/*Write a C++ program that asks the user to guess a number between 1 and 100. The 
program should provide hints if the guess is too high or too low. Use loops to allow 
the user multiple attempts*/

#include <iostream>
//#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    std::srand(std::time(0)); // Seed the random number generator
    int numberToGuess = std::rand() % 100 + 1; // Random number between 1 and 100
    int userGuess = 0;
    int attempts = 0;

    std::cout << "Guess the number between 1 and 100: ";

    while (userGuess != numberToGuess)
    {
        std::cin >> userGuess;
        attempts++;

        if (userGuess > numberToGuess)
        {
            std::cout << "Too high! Try again: ";
        }
        else if (userGuess < numberToGuess)
        {
            std::cout << "Too low! Try again: ";
        }
        else
        {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    }

    return 0;
}
