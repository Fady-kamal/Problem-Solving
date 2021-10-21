#include<bits/stdc++.h>

#include<algorithm>

using ll = long long;
using namespace std;


//void populate_vector(vector<int>a,int n) {
//
//	for (int i = 0; i < n; i++) {
//
//		cin >> a[i];
//
//	}
//}


int a[1010];
int dp[1010];


int main() {
	int n;
	cin >> n;
 
	for (int i = 1; i <= n; i++) {

		cin >> a[i];
	}

	dp[1] = a[1];

	for (int i = 2; i <= n; i++) {

		dp[i] = min(max(dp[i - 1], dp[i - 2]), a[i]);
	}


	cout << dp[n];


}
