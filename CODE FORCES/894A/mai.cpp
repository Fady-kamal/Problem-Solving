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

	string s;

	cin >> s;

	int cnt(0);
	
	string substr = "QAQ";


	for (int i = 0; i < s.length(); i++) {

		for (int j = i + 1; j < s.length(); j++) {
			
			for (int k = j + 1; k < s.length(); k++) {

				if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
					cnt++;

			}
		}
	}


	cout << cnt << endl;

}









