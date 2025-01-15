#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int locateMaximum(const string array[], int n);
bool hasNoDuplicates(const string array[],int n);
int countXPairs(const string array[], int n, int x);
int findSecondToLastOccurrence(const string array[], int n, string target);
int countPunctuation(const string array[], int n);
int flipAround(string array[], int n);
int moveToEnd(string array[], int n, int pos);

int main()
{

	string one[4] = { "a","b","c","c" };
	assert(locateMaximum(one, 4) == 2);
	assert(locateMaximum(one, 3) == 2);
	assert(locateMaximum(one, 0) == -1);
	assert(locateMaximum(one,-1) == -1);
	string two[5] = { "a","b","b","c","c" };
	assert(hasNoDuplicates(two, -1) == false);
	assert(hasNoDuplicates(two, 5) == false);
	assert(hasNoDuplicates(two, 0) == true);
	assert(hasNoDuplicates(two, 2) == true);
	string three[4] = { "0","3","3","6" };
	assert(countXPairs(three, 0, 4) == -1);
	assert(countXPairs(three, 4, 6) == 2);
	assert(countXPairs(three, 3, 3) == 2);
	assert(countXPairs(three, 4, 10) == 0);
	string four[5] = { "what","yes","no","yes","yes"};
	assert(findSecondToLastOccurrence(four, 0, "yes"));
	assert(findSecondToLastOccurrence(four, 5, "yes") == 3);
	assert(findSecondToLastOccurrence(four, 3, "yes") == -1);
	assert(findSecondToLastOccurrence(four, 5, "no") == -1);
	string five[4] = { "1.2","-3","!=","five," };
	assert(countPunctuation(five, 0) == -1);
	assert(countPunctuation(five, 4) == 4);
	assert(countPunctuation(five, 2) == 2);
	string six[5] = { "one","two","three","four","five"};
	assert(flipAround(six, 0) == 0);
	assert(flipAround(six, 5) == 2);
	assert(flipAround(six, 4) == 2);
	assert(flipAround(six, 3) == 1);
	assert(flipAround(six, 2) == 1);
	string seven[4] = { "apples","grapes","mango","banana" };
	assert(moveToEnd(seven, 0, 2) == -1);
	assert(moveToEnd(seven, 4, 4) == -1);
	assert(moveToEnd(seven, 4, -1) == -1);
	assert(moveToEnd(seven, 4,3 )== 3);
	assert(moveToEnd(seven, 4, 2) == 2);

		cerr << "All tests succeeded" << endl;
	return(0);
}

int locateMaximum(const string array[], int n) {
	if (n <= 0) {
		return(-1);
	}
	int maximum = 0;
	string max = "";
	
	for (int i = 0; i < n; i++)
	{
		string s;
		s = array[i];
		if (s > max) {
			maximum = i;
			max = s;
		}
	}
	return(maximum);
}

bool hasNoDuplicates(const string array[], int n) {
	if (n < 0) {
		return(false);
	}
	if (n == 0) {
		return(true);
	}
	string s;
	string t;
	for (int i = 0; i < n; i++)
	{
		s = array[i];
		for (int j = i + 1; j < n; j++)
		{
			t = array[j];
			if (t == s && j != i) {
				return(false);
			}
		}
	}
	return(true);
}

int countXPairs(const string array[], int n, int x) 
{
	if (n <= 0) {
		return(-1);
	}
	int pairs = 0;
	int value1 = 0;
	int value2 = 0;
	for (int i = 0; i < n; i++)
	{
		value1 = stoi(array[i]);
		for (int j = i + 1; j < n; j++)
		{
			value2 = stoi(array[j]);
			if (value1 + value2 == x)
			{
				pairs = pairs + 1;
			}
		}
	}
     return(pairs);
}

int findSecondToLastOccurrence(const string array[], int n, string target) {
	if (n <= 0)
	{
		return(-1);
	}

	int last = -1;
	int second_to_last = -1;
	string s;
	for (int i = 0; i < n; i++)
	{
		s = array[i];
		if (s == target)
		{
			second_to_last = last;
			last = i;
		}

	}

	if (second_to_last >= 0)
	{
		return(second_to_last);
	}

	else
	{
		return(-1);
	}
}

int countPunctuation(const string array[], int n)
{
	if (n <= 0) {
		return(-1);
	}
	string s;
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		s = array[i];
		for (size_t j = 0; j < s.size(); j++)
		{
			char c = s.at(j);
			if (c == '.' || c == ',' || c == '!' || c == ';' || c == '-' || c == '/' || c == ':' || c == '?' || c == '"')
			{
				counter++;
			}
		}		
	}
	return(counter);
}

int flipAround(string array[], int n) 
{
	int flip = 0;
	string s;
	for (int i = 0; i < n / 2; i++)
	{
		s = array[i];
		array[i] = array[n - i - 1];
		array[n - i - 1] = s;
		flip = flip + 1;
	}
	return(flip);
}

int moveToEnd(string array[], int n, int pos)
{
	if (n <= 0 || pos >= n || pos <0)
	{
		return(-1);
    }
	string s = array[pos];
	for (int i = pos; i < n - 1; i++)
	{
		array[i] = array[i + 1];
	}
	array[n - 1] = s ;
	
	return(pos);
}