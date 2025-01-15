// BruinLearn.cpp
// Project 5
// Onur Calisir 605489394

#include <iostream>    
#include <string>      
using namespace std;
#include "BruinCard.h"
#include "Enums.h"
#include "MealPlan.h"

BruinCard::BruinCard()
{

}

void BruinCard::purchaseMealPlan(MealPlan plan)
{
	switch (plan.getPlan())
	{
	case REGULAR11:
	case PREMIER11:
	case REGULAR14:
	case PREMIER14:
	case REGULAR19:
	case PREMIER19:
		mPlan = plan;
		mBoughtAMealPlan = true;
		break;
	default:
		mBoughtAMealPlan = false;
		break;
	}
}

bool BruinCard::hasPurchasedMealPlan()
{
	bool purchasedmealplan = false;
	if (mBoughtAMealPlan == true)
	{
		purchasedmealplan = true;
	}
	return(purchasedmealplan);
}
plan BruinCard::getPlan()
{
		return(mPlan.getPlan());
}

bool BruinCard::eat(meal m)
{
	bool RetValue = false;

	if (mBoughtAMealPlan == true)
	{
		if (mPlan.unusedMealsCarryOver() == true) // Premier Plans
		{
			if (m == BREAKFAST)
			{
				if (howManyMealsLeft == 0)
				{
					RetValue = false; // stop from running
				}

				hasEatenBreakfast == true;
				howManyMealsLeft = howManyMealsLeft - 1;
				RetValue = true;
			}
			else if (m == LUNCH)
			{
				if (howManyMealsLeft == 0)
				{
					RetValue = false; // stop from running
				}

				hasEatenLunch == true;
				howManyMealsLeft = howManyMealsLeft - 1;
				RetValue = true;
			}
			else if (m == DINNER)
			{
				if (howManyMealsLeft == 0)
				{
					RetValue = false; // stop from running
				}

				hasEatenDinner == true;
				howManyMealsLeft = howManyMealsLeft - 1;
				RetValue = true;
			}
			else if (m == WEEKENDBRUNCH)
			{
				if (howManyMealsLeft == 0)
				{
					RetValue = false; // stop from running
				}
				hasEatenBrunch == true;
				howManyMealsLeft = howManyMealsLeft - 1;
				RetValue = true;
			}

		}
		else if (mPlan.unusedMealsCarryOver() == false) // Regular Plans
		{
			if (m == BREAKFAST)
			{
				if (hasEatenBreakfast == false)
				{
					hasEatenBreakfast = true;
					howManyMealsLeft = howManyMealsLeft - 1;
					RetValue = true;
				}
				else if (hasEatenBreakfast == true || howManyMealsLeft == 0)
				{
					RetValue = false; // stop from running
				}

			}
			else if (m == LUNCH)
			{
				if (hasEatenLunch == true || howManyMealsLeft == 0)
				{
					RetValue = false; // stop from running
				}
				if (hasEatenLunch == false)
				{
					hasEatenLunch = true;
					howManyMealsLeft = howManyMealsLeft - 1;
					RetValue = true;
				}
			}
			else if (m == DINNER)
			{
				if (hasEatenDinner == true || howManyMealsLeft == 0)
				{
					RetValue = false; // stop from running
				}
				if (hasEatenDinner == false)
				{
					hasEatenDinner = true;
					howManyMealsLeft = howManyMealsLeft - 1;
					RetValue = true;
				}
			}
			else if (m == WEEKENDBRUNCH)
			{
				if (hasEatenBrunch == true || howManyMealsLeft == 0)
				{
					RetValue = false; // stop from running
				}
				if (hasEatenBrunch == false)
				{
					hasEatenBrunch = true;
					howManyMealsLeft = howManyMealsLeft - 1;
					RetValue = true;
				}
			}

		}
	}
	return(RetValue);
}

int BruinCard::mealsLeftThisWeek()
{
	if (mBoughtAMealPlan == true)
	{
		return(howManyMealsLeft);
	}
	else
	{
		return(0);
	}
}

void BruinCard::startQuarter()
{
	if (mPlan.getPlan() == PREMIER11)
	{
		howManyMealsLeft = 11 * 11;
	}
	else if (mPlan.getPlan() == PREMIER14)
	{
		howManyMealsLeft = 11 * 14;
	}
	else if (mPlan.getPlan() == PREMIER19)
	{
		howManyMealsLeft = 11 * 19;
	}
}
void BruinCard::newWeek()
{
	if (mPlan.getPlan() == REGULAR11)
	{
		howManyMealsLeft = 11;
	}
	else if (mPlan.getPlan() == REGULAR14)
	{
		howManyMealsLeft = 14;
	}
	else if (mPlan.getPlan() == REGULAR19)
	{
		howManyMealsLeft = 19;
	}

	hasEatenBreakfast = false;
	hasEatenLunch = false;
	hasEatenDinner = false;
	hasEatenBrunch = false;
}
void BruinCard::newDay()
{
	hasEatenBreakfast = false;
	hasEatenLunch = false;
	hasEatenDinner = false;
	hasEatenBrunch = false;
}
