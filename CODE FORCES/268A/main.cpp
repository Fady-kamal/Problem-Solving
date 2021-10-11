#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
void printvector(vector<int>& vec) {

	cout << '[';
	for (int i = 0; i < vec.size(); i++) {

		if (i > 0)
			cout << ", ";
		cout << vec[i];
	}

	cout << ']';

}


const int SIZE = 100;
int home[30];
int guest[30];
int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> home[i];
		cin >> guest[i];
	}

	int sum(0);
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			if (home[i] == guest[j])
				sum++;
		}

	}


	cout << sum;


}