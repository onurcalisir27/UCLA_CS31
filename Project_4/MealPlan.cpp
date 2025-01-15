// MealPlan.cpp
// Project 5
// Onur Calisir 605489394

#include <iostream>    
#include <string>      
using namespace std;
#include "Enums.h"
#include "MealPlan.h"

MealPlan::MealPlan()
{
	
}

void MealPlan::pickPlan(plan p)
{
	mPlan = p;
}

plan MealPlan::getPlan()
{
	return(mPlan);
}

double MealPlan::cost()
{
	double plancost = 0;
	switch (mPlan)
	{
	case REGULAR11:
		plancost = 4646.64;
		break;
	case PREMIER11:
		plancost = 5018.28;
		break;
	case REGULAR14:
		plancost = 5107.20;
		break;
	case PREMIER14:
		plancost = 5570.04;
		break;
	case REGULAR19:
		plancost = 5278.20;
		break;
	case PREMIER19:
		plancost = 5898.20;
		break;
	default:
		break;
	}
	return(plancost);
}
int  MealPlan::mealsEachWeek()
{
	int meals = 0;
	switch (mPlan)
	{
	case REGULAR11:
	case PREMIER11:
		meals = 11;
		break;
	case REGULAR14:
	case PREMIER14:
		meals = 14;
		break;
	case REGULAR19:
	case PREMIER19:
		meals = 19;
		break;
	default:
		break;
	}
	return(meals);
}

bool  MealPlan::unusedMealsCarryOver()
{
	bool carryover = false;
	plan p;
	switch (mPlan)
	{
	case REGULAR11:
	case REGULAR14:
	case REGULAR19:
		carryover = false;
		break;
	case PREMIER11:
	case PREMIER14:
	case PREMIER19:
		carryover = true;
		break;
	}
	return(carryover);
}