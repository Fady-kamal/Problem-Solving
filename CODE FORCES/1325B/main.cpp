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


int main() {


	int  t;
	cin >> t;


	while (t--) {

		int n;
		cin >> n;
		vector<int> A(n);


		//populate the array 
		for (int i = 0; i < n; i++) {

			cin >> A[i];
		}


		cout << set<int>(A.begin(), A.end()).size() << endl;





	}

}