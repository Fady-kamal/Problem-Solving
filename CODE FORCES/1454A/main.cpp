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
//
//void display(int arr[], int n) {
//
//	for (int i = 1; i <= n; i++) {
//		cout << arr[i] << " ";
//	}
//
//	cout << endl;
//}


int sum_level(int i) {
	return (i *(i + 1)) / 2;
}


int main()
{
	int n;
	cin >> n;
	int sum(0);
	int max_height(0);


	for (int i = 1; i <= n; i++) {


		if (sum + sum_level(i) <= n) {
			sum += sum_level(i);
			max_height++;

		}

	}


	cout << max_height;

}

