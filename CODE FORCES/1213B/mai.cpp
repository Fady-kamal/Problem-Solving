// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <numeric>
typedef long long ll;

using namespace std;
const int N = 15e4;
int A[N];
//
//void display(int arr[N], int n) {
//
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//}
//
//void populate(int arr[N], int n) {
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//}


int main()
{

	int t;
	cin >> t;

	while (t--) {

		int n;
		cin >> n;
		int bad_days = 0;

		//populate the array  A = {a1 ,.. ,an}
		for (int i = 0; i < n; i++) {
			 		cin >> A[i];
			 	}
		

		//solution: time limit problem 
		//for (int i = 0; i < n; i++) {

		//	for (int j = i + 1; j < n; j++)

		//		if (A[j] < A[i]) {
		//			bad_days++;
		//			break;
		//		}
		//		
		//			
		//	
		//}


		//Compare the current day with the minmum of the later days
		int min_later_days = A[n - 1];

		for (int i = n - 2; i >= 0; i--) {

			if (A[i] > last_element)
				bad_days++;

			min_later_days = min(A[i], min_later_days);

		}


		cout << bad_days << endl;

		}

	}









