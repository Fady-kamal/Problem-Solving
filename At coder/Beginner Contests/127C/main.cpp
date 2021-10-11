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


const int SIZE1 = 1e5;
const int SIZE2 = 1e5;
int L[SIZE2];
int R[SIZE2];

int main() {

	int n, m;
	cin >> n >> m;
	//vector<int> vec(SIZE1);
	//int cnt(0);
	//int min(0);
	//for (int i = 0; i <n; i++) {
	//	vec[i] = i+1;
	//}

	for (int i = 0; i < m; i++) {
		cin >> L[i];
		cin >> R[i];
	}


	int maxL = 1;
	int minR = n;

	for (int i = 0; i < m; i++) {

		maxL = max(maxL, L[i]);
		minR = min(minR, R[i]);


	}

	int ans = minR - maxL + 1;

	ans = max(ans, 0);

	cout << ans;


}