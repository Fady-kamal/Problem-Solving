// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;
 
 int main()
{

	string t, s;
	cin >> t >> s;

	reverse(s.begin(), s.end());

	if (t == s)
		cout << "YES";

	else
		cout << "NO";
}

