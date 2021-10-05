

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;
//const int n = 100;
//char arr[n];
//
//string lower_case(string word) {
//
//	for (int i = 0; i < word.length(); i++) {
//		word[i] = tolower(word[i]);
//	}
//
//	return word;
//
//}
//string upper_case(string word) {
//
//	for (int i = 0; i < word.length(); i++) {
//		word[i] = toupper(word[i]);
//	}
//
//	return word;
//
//}





int main()
{
	int n, q;
	cin >> n >> q;

	string s;
	cin >> s;
	int a[100000] = {};

	for (int i = 1; i <= n; i++) {
		a[i] = a[i - 1] + (s[i - 1] - 97 + 1); //s[i-1]: first element in the array 

	}

	while(q--) {

		int l, r;
		cin >> l >> r;


		/*
		* why arr[l - 1] not arr[l] ?
		* to include l so that you get the length from l to r
		*/
		cout << a[r] - a[l - 1] << endl;

}


}





