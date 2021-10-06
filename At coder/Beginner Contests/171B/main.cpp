// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <numeric>
typedef long long ll;

using namespace std;
int  P[1000];


int main()
{

	int n, k;

	int total = 0;

	cin >> n >> k;

	//populate the arrays
	for (int i = 0; i <  n; i++) {
		cin >> P[i];	
	}

	sort(P, P + n);

	total = accumulate(P, P + k, total);

	cout << total << endl;


	return 0;
}




