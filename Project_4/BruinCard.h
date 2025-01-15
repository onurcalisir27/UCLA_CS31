// BruinCard.h
// Project 5
// Onur Calisir 605489394

using namespace std;
#include <string>
#include "MealPlan.h"
#include "Enums.h"

#ifndef BruinCard_hpp
#define BruinCard_hpp

#include <stdio.h>

class BruinCard
{
public:
	BruinCard(); // constructor

	void purchaseMealPlan(MealPlan plan);
	bool hasPurchasedMealPlan();
	plan getPlan();
	bool eat(meal m);
	void startQuarter();
	void newWeek();
	void newDay();
	int mealsLeftThisWeek();

private:
	MealPlan mPlan;
	bool mBoughtAMealPlan;
	bool hasEatenBreakfast;
	bool hasEatenLunch;
	bool hasEatenDinner;
	bool hasEatenBrunch;
	
	int howManyMealsLeft;
};


#endif /* BruinCard_hpp */