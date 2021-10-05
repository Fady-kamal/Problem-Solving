// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;
int P[100];



int main()
{
	int n;
	cin >> n;

	while (n--) {

		string word;
		cin >> word;

		if (word.length() > 10) {
			cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
			
		}
		

		else {  

			cout << word << endl;
		}
	}

}

