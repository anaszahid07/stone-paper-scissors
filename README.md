# Rock-Paper-Scissors Game

## Overview

This is a simple console-based implementation of the Rock-Paper-Scissors game. The player competes against the AI, where both the player and AI make a choice of either Rock, Paper, or Scissors. The program determines the winner based on the standard rules of the game:

- Rock beats Scissors
- Scissors beats Paper
- Paper beats Rock

The game continues until the player decides to stop playing.

## Features

- **Player vs. AI**: The player competes against an AI that randomly selects one of the three options (Rock, Paper, or Scissors).
- **User-Friendly Interface**: The game provides a simple and interactive interface where the player selects their choice, and the AI randomly picks one.
- **Outcome Display**: After each round, the program displays the outcome (win, loss, or draw) along with the choices made by both the player and the AI.
- **Replay Option**: The player can choose to play multiple rounds or exit the game after each match.

## Game Flow

1. **Welcome Screen**: The program greets the player and asks for their name.
2. **Player's Choice**: The player selects their throw (Paper, Rock, or Scissors).
3. **AI's Throw**: The AI randomly selects its throw.
4. **Determine the Winner**: The program compares the player's throw with the AI's throw and determines the winner based on the standard rules.
5. **Display Results**: The result of the round is displayed, showing whether the player won, lost, or if it was a draw.
6. **Replay Option**: After each round, the player can choose whether to play another round or exit the game.

## Example Output

```plaintext
========================================
       WELCOME TO THE GAME!             
========================================

What is your name? Alice

Hello Alice, choose your throw:
 1. Paper
 2. Rock
 3. Scissor
Enter your choice: 1

AI throws Rock
Congratulations, Alice! You win!

Do you want to play again? (y/n): y

Hello Alice, choose your throw:
 1. Paper
 2. Rock
 3. Scissor
Enter your choice: 2

AI throws Scissor
AI wins this match, better luck next time, Alice!

Do you want to play again? (y/n): n

Thank you for playing, Alice! See you next time!
