//Movie Recommendation System
#include <iostream>
#include <string>
using namespace std;
int main()
{
//Initializing 
	string moviename;
	int theme_value;
	int taste_value;
	string actors;
	string thumbs_up;
	string thumbs_down;

double recommendation = 0;//Recommendation variable
const string yes = "Yes";
const string no = "No";
//Magic Code
cout.setf(ios::showpoint);
cout.precision(1);
cout.setf(ios::fixed);
 //Requesting Inputs
cout << "What movie is to be rated? " << endl;
getline(cin, moviename);
cout << "On a scale of 1-10 how much do you like movies with a similar theme? " << endl;
cin >> theme_value;
cout << "Do you like movies starring the actor or actress that stars in this movie? " << endl;
cin.ignore(10000, '\n');
getline(cin, actors);
cout << "On a scale of 1-10, how much do users with tastes similar to yours like this movie? " << endl;
cin >> taste_value;
cout << "Have you thumbed up this movie already? " << endl;
cin.ignore(10000, '\n');
getline(cin, thumbs_up);
cout << "Have you thumbed down this movie already? " << endl;
getline(cin, thumbs_down);

//Error messages
if (theme_value < 1 || theme_value>10)
{
	cout << "Invalid theme value! " << endl;
	return(0);
}
if (actors != yes && actors != no)
{
	cout << "Invalid actor value! " << endl;
	return(0);
}
if (taste_value < 1 || taste_value>10)
{
	cout << "Invalid taste value! " << endl;
	return(0);
}
if (thumbs_up != yes && thumbs_up != no)
{
	cout << "Invalid thumbed up value! " << endl;
	return(0);
}
if (thumbs_down != yes && thumbs_down != no)
{
	cout << "Invalid thumbed down value! " << endl;
	return(0);
}
// Recommantion Value Calculation
if (theme_value == 1)
{
	recommendation = (recommendation) + 0.3;
}
else if (theme_value == 2)
{
	recommendation = (recommendation) + 0.6;
}
else if (theme_value == 3)
{
	recommendation = (recommendation) + 0.9;
}
else if (theme_value == 4)
{
	recommendation = (recommendation)+1.2;
}
else if (theme_value == 5)
{
	recommendation = (recommendation) + 1.5;
}
else if (theme_value == 6)
{
	recommendation = (recommendation) + 1.8;
}
else if (theme_value == 7)
{
	recommendation = (recommendation) + 2.1;
}
else if (theme_value == 8)
{
	recommendation = (recommendation) + 2.4;
}
else if (theme_value == 9)
{
	recommendation = (recommendation) + 2.7;
}
else if (theme_value == 10)
{
	recommendation = (recommendation) + 3;
}
if (actors == yes)
{
	recommendation = (recommendation)+2;
}
else
recommendation = recommendation;

/// <summary>
/// 
/// </summary>
if (taste_value == 1)
{
	recommendation = (recommendation)+0.3;
}
else if (taste_value == 2)
{
	recommendation = (recommendation)+0.6;
}
else if (taste_value == 3)
{
	recommendation = (recommendation)+0.9;
}
else if (taste_value == 4)
{
	recommendation = (recommendation)+1.2;
}
else if (taste_value == 5)
{
	recommendation = (recommendation)+1.5;
}
else if (taste_value == 6)
{
	recommendation = (recommendation)+1.8;
}
else if (taste_value == 7)
{
	recommendation = (recommendation)+2.1;
}
else if (taste_value == 8)
{
	recommendation = (recommendation)+2.4;
}
else if (taste_value == 9)
{
	recommendation = (recommendation)+2.7;
}
else if (taste_value == 10)
{
	recommendation = (recommendation)+3;
}
if (thumbs_up == yes)
{
	recommendation = (recommendation)+2;
}
else
recommendation = recommendation;

if (thumbs_down == yes)
{
	recommendation = (recommendation)-2;
}
else
recommendation = recommendation;
// Results
cout << "Our recommendation for you for the movie: " << moviename  << " is "<<  recommendation;

return(0);
}
