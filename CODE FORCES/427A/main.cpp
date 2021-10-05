// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;


const int N = 1e5;
int arr[N];
void populate(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

}
int main()
{

	int n;
	cin >> n;

	populate(arr, n);


	int hired(0);
	int crimes(0);

	for (int i = 0; i < n; i++) {

		if ((arr[i] == -1) && (hired == 0))
			crimes++;

		else if ((arr[i] == -1) && (hired > 0))
			hired--;

		else
			hired += arr[i];

	}


	cout << crimes;



}
 
