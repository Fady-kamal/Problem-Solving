

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

int solve() {

	int r;
	cin >> r;

	vector<int> v(r);

	//populate the vector
	for (int &x : v) {
		cin >> x;
	}

	sort(all(v));

	int vito = v[r / 2];

	//compute the minmum total distance 
	int min_total_dis = 0;
	for (int i = 0; i < r; i++) {
		min_total_dis += abs(v[i] - vito);
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




