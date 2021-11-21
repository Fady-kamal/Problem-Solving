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
//cout << fixed << setpercision(# of digits after the fixed point 


int main() {
	fast;
	int t;

	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		vector<int> v(n+1);
		
		for(int i = 1; i <= n; i++) {
			cin >> v[i];
		}
		
		vector<int> desired = v;
		sort(all(desired));

		bool flag =  true;
		for (int i = n - x + 1; i <= x; i++) {
			if (v[i] != desired[i]) {
				flag = false;
 			}
		}

		if (flag)
			cout << "YES" << el;
		else
			cout << "NO" << el;
	}


}