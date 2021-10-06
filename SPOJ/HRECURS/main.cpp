#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int>& vec) {

	cout << '[';
	for (int i = 0; i < vec.size(); i++) {

		if (i > 0)
			cout << ", ";
		cout << vec[i];
	}

	cout << ']';

}



void removeZeroElements(vector<int>& vec) {

	for (int i = 0; i < vec.size(); i++) {

		if (vec[i] == 0)
			vec.erase(vec.begin() + i, vec.begin() + (i + 1)); //remove the i-th element

	}


}


void concatenate(vector<int>& V, vector<int> v1, vector<int> v2) {

	V.insert(V.begin(), v1.begin(), v1.end());
	V.insert(V.end(), v2.begin(), v2.end());
}



int getSum(int n, vector<int>vec) {

	if (n == 0)
		return 0;

	else {
		n--;
		return vec[n] + getSum(n, vec);
	}
}


int main() {

	int t;

	cin >> t;

	for (int i =1 ; i <= t; i++) {

		int n;
		cin >> n;
		vector<int> vec;
		

		for (int i = 0; i < n; i++) {

			int x; cin >> x;
			vec.push_back(x);
		}

		int sum = getSum(n, vec);

		cout <<"Case "  <<i << ": "<<  sum << endl;

		
	}


}


