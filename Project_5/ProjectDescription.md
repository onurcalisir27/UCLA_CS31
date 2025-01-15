# Project 5: Mastermind Game

This project recreates the Mastermind code-breaking game using C++ with object-oriented principles. It includes functionality to handle player moves, generate scores, and track gameplay progress across multiple rounds.

## Objectives
- Build a multi-class system for a code-breaking game.
- Use OOP concepts such as encapsulation, inheritance, and polymorphism.
- Handle game logic, randomization, and scoring systematically.

## Description
Mastermind is a game where players attempt to guess a secret code through a series of moves. Each move generates a score indicating how close the guess was to the code. The project involves several key components:
- **Move**: Represents a player's guess.
- **Score**: Evaluates the accuracy of a move.
- **Board**: Tracks moves and scores over multiple rounds.
- **Mastermind**: Manages the overall game flow.

### Key Features
1. **Move**:
   - Represents a player's guess in the game.
   - Supports randomization and validation of moves.

2. **Score**:
   - Compares player guesses to the secret code.
   - Provides feedback using "Right," "Maybe," and "Wrong."

3. **Board**:
   - Stores and displays moves and their corresponding scores.
   - Tracks the number of rounds played.

4. **Mastermind**:
   - Manages game initialization, gameplay, and determining outcomes.
   - Supports up to four rounds of gameplay.

## File Descriptions
1. **`Board.cpp`**:
   - Tracks the game's progress, moves, and scores.
   - Manages game rounds and ensures proper sequence handling.

2. **`Mastermind.cpp`**:
   - Implements the game's core logic, including initialization and result determination.

3. **`Move.cpp`**:
   - Handles player guesses and validates input.

4. **`Piece.cpp`**:
   - Models individual pieces of a move with color attributes.

5. **`Random.cpp`**:
   - Generates random values for gameplay (e.g., randomizing secret codes).

6. **`Score.cpp`**:
   - Compares player moves to the secret code and generates scores.

## Challenges Overcome
- Managing complex interdependencies between classes.
- Debugging gameplay logic, especially in scoring and move validation.
- Testing gameplay by simulating multiple rounds with different scenarios.

## Sample Gameplay
1. **Initialization**:
   - The game randomly generates a secret code (e.g., "RBYO").

2. **Player Guess**:
   - Player Guess: "RRRR" Output: "R_" (One color is correct and in the correct position)

4. **Game Outcome**:
- The player wins if the guess exactly matches the code within four rounds.
- The game ends after four rounds if the code is not guessed.

## Skills Developed
- Designing and implementing multi-class C++ programs.
- Using object-oriented principles to manage game logic.
- Debugging and testing interdependent systems.
