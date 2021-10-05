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


//int sum_level(int i) {
//	return (i * (i + 1)) / 2;
//}


string lower_case(string word) {

	for (int i = 0; i < word.length(); i++) {
		word[i] = tolower(word[i]);
	}

	return word;

}


int main()
{

	string word_one;
	string word_two;
	cin >> word_one >> word_two;

	word_one = lower_case(word_one);
	word_two = lower_case(word_two);


	int one(0), two(0);


	//tie 
	if (word_one == word_two)
		cout << 0;

	//one less than two
	else if (word_one < word_two)
		cout << -1;

	//two less than one
	else
		cout << 1;
 
}

