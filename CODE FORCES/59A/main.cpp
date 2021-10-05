// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;
const int N = 100;
char arr[N];

string lower_case(string word) {

	for (int i = 0; i < word.length(); i++) {
		word[i] = tolower(word[i]);
	}

	return word;

}
string upper_case(string word) {

	for (int i = 0; i < word.length(); i++) {
		word[i] = toupper(word[i]);
	}

	return word;

}
 
 


int main()
{

	string word;
	cin >> word;

	int upper = 0, lower = 0;
	for (int i = 0; i < word.length(); i++) {

		if (word[i] >= 'A' && word[i] <= 'Z')
			upper++;
		else if (word[i] >= 'a' && word[i] <= 'z')
			lower++;
	}

	if (lower >= upper) {
		cout << lower_case(word);
	}
	else {
		cout << upper_case(word);

	}

		


}

