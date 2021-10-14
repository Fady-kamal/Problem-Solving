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

	int s, n;

	cin >>  s >> n;

	pair<int, int> xy[1000];


	for (int i = 0; i < n; i++) {
		cin >> xy[i].first;
		cin >> xy[i].second;
	}

	sort(xy, xy + n);


	//the initial value for kirito strength 
	int strength = s;

	for (int i = 0; i < n; i++) {

		if (strength <= xy[i].first) {
			cout << "NO";
			return 0;
		}

		else {

			strength += xy[i].second;

		}


	}

	cout << "YES";




}
