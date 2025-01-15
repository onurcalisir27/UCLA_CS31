# Project 4: Meal Plan System

This project models a UCLA meal plan system using object-oriented programming principles in C++. It includes functionality to select and manage meal plans, calculate costs, and track meal usage for the BruinCard system.

## Objectives
- Demonstrate object-oriented design with classes and enums.
- Implement functionalities for selecting and managing meal plans.
- Practice using multiple files in a C++ project.

## Description
The program consists of two main classes: `MealPlan` and `BruinCard`. These classes work together to simulate the functionalities of a UCLA meal plan system:
- **MealPlan**: Represents a meal plan, including its type, cost, and rules (e.g., whether unused meals carry over).
- **BruinCard**: Simulates a UCLA BruinCard, allowing students to purchase meal plans, track remaining meals, and dine based on their plan.

### Key Features
1. **MealPlan**:
   - Choose from multiple meal plan types (`REGULAR11`, `PREMIER14`, etc.).
   - Calculate costs for different meal plans.
   - Determine the number of meals provided each week and whether unused meals carry over.

2. **BruinCard**:
   - Purchase meal plans.
   - Track meals remaining for the week.
   - Manage dining activities (e.g., breakfast, lunch, dinner).
   - Handle special dining rules for regular and premier plans.

## File Descriptions
1. **`Enums.h`**:
   - Defines enumerations for meal types (`BREAKFAST`, `LUNCH`, etc.) and meal plans (`REGULAR11`, `PREMIER14`, etc.).

2. **`MealPlan.h` and `MealPlan.cpp`**:
   - Class to model a meal plan.
   - Includes functions to pick a plan, calculate costs, determine meal rules, and more.

3. **`BruinCard.h` and `BruinCard.cpp`**:
   - Class to model a BruinCard.
   - Includes functions to purchase meal plans, track meals left, and manage dining.

4. **`main.cpp`**:
   - Provides test cases for the classes and their functionality.

## Challenges Overcome
- Managing dependencies between the `MealPlan` and `BruinCard` classes.
- Debugging issues with function naming and plan tracking logic.
- Transitioning class diagrams into functional header files.

## Skills Developed
- Working with multiple files in a C++ project.
- Designing interdependent classes.
- Handling edge cases and debugging complex logic.
