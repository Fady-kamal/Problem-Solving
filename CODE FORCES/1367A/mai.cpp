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

	int t;
	cin >> t;
	
	while (t--) {


		string word;
		cin >> word;

		cout << word[0] << word[1];

		for (int i = 3; i < word.length(); i += 2) {

			cout << word[i];
		}

		cout << endl;

	}
		


}

