// MealPlan.h
// Project 5
// Onur Calisir 605489394

#ifndef MealPlan_h
#define MealPlan_h

#include <string>
using namespace std;
#include "Enums.h"

class MealPlan
{
public:
	//constructor
	MealPlan();
//getters
		void pickPlan(plan p);
		plan getPlan();
		double cost();
		int mealsEachWeek();
		bool unusedMealsCarryOver();

private:
	plan mPlan;
};

#endif /* MealPlan_h */