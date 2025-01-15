# Project 3: Array Manipulation Functions

This project implements several functions to manipulate and analyze arrays in C++. The functions perform a range of operations, including finding the maximum element, checking for duplicates, counting specific pairs, flipping arrays, and more. The project demonstrates advanced array handling and function design.

## Objectives
- Gain experience with array manipulation in C++.
- Practice designing reusable functions.
- Handle edge cases and validate inputs for robustness.

## Description of Functions
1. **`locateMaximum`**:
   - Finds the position of the maximum string in an array.
   - Returns `-1` if the array size is non-positive.

2. **`hasNoDuplicates`**:
   - Checks if an array contains no duplicate elements.
   - Returns `true` for no duplicates, otherwise `false`.

3. **`countXPairs`**:
   - Counts pairs of numbers (as strings) whose sum equals `x`.
   - Returns `-1` for invalid input sizes.

4. **`findSecondToLastOccurrence`**:
   - Finds the second-to-last occurrence of a target string.
   - Returns `-1` if the target is not found twice.

5. **`countPunctuation`**:
   - Counts the total punctuation characters in an array.
   - Returns `-1` if the array size is invalid.

6. **`flipAround`**:
   - Reverses the elements in an array and counts the swaps made.

7. **`moveToEnd`**:
   - Moves the element at a specified position to the end of the array.
   - Returns the original position or `-1` for invalid inputs.

## Challenges Overcome
- Converting strings to integers using `stoi` for calculations.
- Understanding the logic for second-to-last occurrence tracking.
- Debugging through edge cases like empty arrays and negative sizes.

## Skills Developed
- Array processing and iteration techniques.
- Debugging and testing complex functions.
- Edge case handling in function design.
