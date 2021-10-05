// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <numeric>;

using namespace std;

bool arr[100];



int main()
{

	int sum = 0;
	int n;

	cin >> n;

	//populate the array
	for (int i = 0; i < n; i++) {

		cin >> arr[i];
	}

	sum = accumulate(arr, arr + n, sum);


	if (sum == 0)
		cout << "EASY";
	else
		cout << "HARD";

	return 0;
}




