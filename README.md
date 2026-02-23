# Number Guessing Game in C (1–100)

## Overview
This project is a console-based Number Guessing Game developed in C.  
The program generates a random number between 1 and 100, and the user has to guess the correct number with the help of hints provided after each attempt.

The game also includes input validation and attempt tracking, making it more robust than a basic random number generator.

## Features
- Random number generation between 1 and 100
- Interactive user input system
- Hint system (Higher / Lower guidance)
- Input validation for non-numeric values
- Range validation (only accepts 1–100)
- Attempt counter to track performance
- Clean and user-friendly console interface

## Technologies Used
- C Programming Language
- Standard Libraries:
  - stdio.h (Input/Output)
  - stdlib.h (rand, srand)
  - time.h (random seed generation)

## Program Logic
1. The program seeds the random number generator using system time.
2. A random number between 1 and 100 is generated.
3. The user is prompted to enter guesses.
4. The program provides hints:
   - "Higher number please" if the guess is too low
   - "Lower number please" if the guess is too high
5. The loop continues until the correct number is guessed.
6. Total number of attempts is displayed at the end.

## Input Validation
The program includes error handling to:
- Prevent crashes from invalid inputs (like letters or symbols)
- Ensure the user enters only numbers between 1 and 100
- Clear invalid input from the buffer for smooth execution

## How to Run the Program
### Using GCC Compiler:
```bash
gcc number_guessing_game.c -o game
./game
