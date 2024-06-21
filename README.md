# Tic-Tac-Toe Game

This is a simple Tic-Tac-Toe game implemented in C++. It supports two modes: Player vs. Computer and Player vs. Player.

## How to Play

1. **Computer vs Player**:
   - The player ('X') competes against the computer ('O').
   - The player selects a position (1-9) to place their mark.
   - The computer randomly selects an empty position.

2. **Player vs Player**:
   - Two players take turns to place their marks ('X' and 'O').
   - Each player selects a position (1-9) to place their mark.

## How to Run

### Using Makefile

1. Ensure you have `g++` installed on your system.
2. Navigate to the project directory.
3. Compile the program using the following command:
   ```bash
   make
   ```
5. Run the program to start the game.
   ```bash
   ./tic-tac-toe
   ```

### Using g++

1. Ensure you have `g++` installed on your system.
2. Navigate to the project directory.
3. Compile the program using the following command:
   ```bash 
   g++ -o tic-tac-toe main.cpp
   ```
4. Run the program:
   ```bash
   ./tic-tac-toe
   ```
## Controls
Enter the number corresponding to the position on the board where you want to place your mark.
