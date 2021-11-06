

#include<bits/stdc++.h>
#define ll long long
#define Pair pair<ll,ll>

using namespace std;
#define fr(n) for(int i=0;i<n;i++)
#define frj(n) for(int j=0;j<n;j++)
#define frk(n) for(int k=0;k<n;k++)
#define fr1(n) for(int i=1;i<=n;i++)
#define el '\n'
#define f first 
#define s second
#define all(x) (x).begin(), (x).end()
#define allrev(x) (x).rbegin(), (x).rend()
#define fast  ios::sync_with_stdio(0), cin.tie(0) , cout.tie(0);





/*
* Brute force solution: try all the possible solutions 
*/
int solve() {

	int r;
	cin >> r;

	vector<int> v(r);
	int min_total_dis = INT_MAX;
	//populate the vector
	for (int &x : v) {
		cin >> x;
	}

	for (int k = 0; k <= 30000; k++) {
		int sum = 0;
		//Loop on every s 
		for (int i = 0; i < r; i++) {
			sum += abs(k - v[i]);
		}

		min_total_dis = min(min_total_dis, sum);
	}

	return min_total_dis;
}


int main()
{	
	int t;
	cin >> t;
	while (t--) {
		cout << solve() << el;
	} 
}




	