// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;


string arr[100000];
 
int main()
{

	int n;
	cin >> n;
	int cnt = 1;

	//populate the array 
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		
	}

	for (int i = 1; i < n; i++) {

		if (arr[i] != arr[i - 1]) {
			cnt++;
		}
	}

	cout << cnt;

	

 
 
}
 
