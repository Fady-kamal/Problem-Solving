// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <numeric>;

using namespace std;
int P[100];
int I[100];



int main()
{

	int n;
	cin >> n;

	//populate b array 
	for (int i = 1; i <= n; i++) {
		cin >> P[i];
		I[P[i]] = i;
	}

	//display the array
	for (int i = 1; i <= n; i++) {
		cout << I[i] << " ";
	}


}




