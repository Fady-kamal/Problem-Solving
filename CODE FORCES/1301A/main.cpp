 

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;
const int n = 100;
char arr[n];

string lower_case(string word) {

	for (int i = 0; i < word.length(); i++) {
		word[i] = tolower(word[i]);
	}

	return word;

}
string upper_case(string word) {

	for (int i = 0; i < word.length(); i++) {
		word[i] = toupper(word[i]);
	}

	return word;

}
 
 


int main()
{
	int t; cin >> t;

	while (t--) {

		string a, b, c;
		cin >>  a >>  b >> c;
		int cnt = 0;

		for (int i = 0; i < a.length(); i++) {

			if (c[i] != a[i] && c[i] != b[i]) {
				//cout << "NO";
				break;
			}
			else
				cnt++;
		}

		if (cnt == a.length())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}



 
		
}





