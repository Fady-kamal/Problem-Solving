#include <bits/stdc++.h>
using namespace std;
int Y[2000];
int main() {

	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> Y[i];
	}

	sort(Y, Y + n);


	int sum(0);
	for (int i = 0; i < n; i++) {
		if (5 - Y[i] >= k)
			sum++;
	}
	cout << sum/3 << endl;
}