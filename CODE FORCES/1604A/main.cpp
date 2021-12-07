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

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int ans = 0;
		for (int i = 1; i <= n; i++) {

			int k;
			cin >> k;
			ans = max(ans, k - i);
		}

		cout << ans << el;
 
	}


}