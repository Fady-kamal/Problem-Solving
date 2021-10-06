// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <numeric>
typedef long long ll;

using namespace std;
bool  A[1000];


int main()
{

	int n, k;
	cin >> n >> k;

	int total = 0; //total number of victims

	//Loop on every snack type
	while (k--) {
		

		int d;
		cin >> d;

		//Loop on every person corresponding to a specific snack
		while (d--) {
			int x; //snuke number
			cin >> x;
			A[x] = true;
		}

	


	}

	//solution to compute total
	for (int i = 1; i <= n; i++) {
		if (A[i] == 0) //there is a victim 
			total++;

	}

	//Another solution to compute total 
	//total = n - accumulate(A, A + (n + 1), total);

	cout << total;

}




