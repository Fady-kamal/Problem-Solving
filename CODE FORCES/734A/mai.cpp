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

	int n;
	cin >> n;

	string s;

	cin >> s;

	int ant = 0, dan = 0;


	for (int i = 0; i < s.length(); i++) {


		if (s[i] == 'A')
			ant++;
		else
			dan++;
	}


	if (ant > dan)
		cout << "Anton";
	else if (dan > ant)
		cout << "Danik";
	else
		cout << "Friendship";
}









