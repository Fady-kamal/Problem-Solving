// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;


//const int N = 1e5;
//int arr[N];
//void populate(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//}
//
//
//int gcd(int a, int b) {
//
//
//	if (b == 0)
//		return b;
//
//	else
//		return gcd(b, a % b);
//}


int main()
{
	int x, cnt = 0;
	cin >> x;

	while (x > 0) {

		cnt += x%2;

		x /= 2;
	}

	cout << cnt;
}

