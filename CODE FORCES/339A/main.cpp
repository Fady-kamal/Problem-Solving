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

 
 


int main()
{

	string word;
	cin >> word;

	for (int i = 0,j = 0; i < word.length(); i +=2, j++ ) {

		arr[j] = word[i];
	}

	// sort the array 
	// note that the number of operands = number of operators + 1
	sort(arr, arr + (word.length()/2 + 1));

	int num_operators = word.length() / 2 + 1;

	for (int i = 0; i < num_operators; i++) {

		if (i == num_operators - 1)
			cout << arr[i];
		else
			cout << arr[i] << "+";
	}


}

