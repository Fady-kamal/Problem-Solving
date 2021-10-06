// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;

bool isPalindrome(string s);
string pad(int n);

int main()
{

	int N;
	cin >> N;
	string s = pad(N);

	if (isPalindrome(s) == true)
		cout << "Yes";
	else
		cout << "No";
}


string pad(int n) {
	string s = to_string(n);
	int zeros(0);
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] != '0') {
			break;
		}
		else 
			zeros++;
			
	}

	for (int i = 0; i < zeros; i++)
		s = "0" + s;

	return s;
}


bool isPalindrome(string s) {


	//basecase
	if (s.length() < 2)
		return true;

	else {

		char first = s[0];
		char last = s[s.length() - 1];

		if (first == last) {
			s = s.substr(1, s.length() - 2);
			return isPalindrome(s);

		}
		
		else {
			return false;
		}

			
	}
	
	
}
 