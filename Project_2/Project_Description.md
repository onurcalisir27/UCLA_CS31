# Project 2: Movie Recommendation System

This project creates a movie recommendation system in C++. Users provide inputs about their preferences, and the program calculates a recommendation score using weighted factors.

## Objectives
- Handle user inputs dynamically, including multi-word entries.
- Validate input values for accuracy and handle errors effectively.
- Implement a weighted scoring system to calculate movie recommendations based on user preferences.

## Description
The program:
1. Prompts the user for:
   - The movie title.
   - A score (1-10) indicating their interest in the movie's theme.
   - Whether they like the movie's lead actor/actress.
   - A score (1-10) based on recommendations from users with similar tastes.
   - Whether the user has given a thumbs-up or thumbs-down for the movie.
2. Validates all inputs to ensure they fall within the expected ranges and formats.
3. Computes a recommendation score using a weighted formula:
   - Theme preference, actor preference, similar taste scores, and thumbs-up/down influence the final score.
4. Outputs the movie title and its recommendation score.

## Challenges Overcome
- Correctly handling multi-word movie titles using `getline` and `cin.ignore`.
- Validating all inputs for errors like invalid ranges or unsupported formats.
- Resolving precision issues for decimal calculations by configuring stream settings.
