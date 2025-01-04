#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

#define PAPER 1
#define ROCK 2
#define SCISSOR 3

int main() {
    srand((unsigned int)time(NULL));
    int player_throw = 0;
    int ai_throw = 0;
    bool draw = false;
    char choice;
    string player_name;

    // Display welcome message
    cout << "========================================" << endl;
    cout << "       WELCOME TO THE GAME!             " << endl;
    cout << "========================================" << endl << endl;

    // Ask for the player's name
    cout << "What is your name? ";
    cin >> player_name;
    system("cls");

    do {
        // Display selection options
        cout << "Hello " << player_name << ", choose your throw:" << endl;
        cout << " 1. Paper" << endl;
        cout << " 2. Rock" << endl;
        cout << " 3. Scissor" << endl;
        cout << "Enter your choice: ";
        cin >> player_throw;
        system("cls");

        // AI's throw
        ai_throw = (rand() % 3) + 1;
        if (ai_throw == PAPER) {
            cout << "AI throws Paper\n";
        }
        else if (ai_throw == ROCK) {
            cout << "AI throws Rock\n";
        }
        else if (ai_throw == SCISSOR) {
            cout << "AI throws Scissor\n";
        }

        // Determine the outcome
        if (player_throw == ai_throw) {
            draw = true;
            cout << "The game was a draw, try again, " << player_name << "! :)\n";
        }
        else if (player_throw == ROCK && ai_throw == SCISSOR) {
            draw = false;
            cout << "Congratulations, " << player_name << "! You win!\n";
        }
        else if (player_throw == PAPER && ai_throw == ROCK) {
            draw = false;
            cout << "Congratulations, " << player_name << "! You win!\n";
        }
        else if (player_throw == SCISSOR && ai_throw == PAPER) {
            draw = false;
            cout << "Congratulations, " << player_name << "! You win!\n";
        }
        else {
            draw = false;
            cout << "AI wins this match, better luck next time, " << player_name << "!\n";
        }

        // Ask if the player wants to play again
        cout << "Do you want to play again? (y/n): ";
        cin >> choice;
        system("cls");
    } while (draw == true || choice != 'n');

    cout << "Thank you for playing, " << player_name << "! See you next time!\n";
    return 0;
}
