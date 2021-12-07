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
		vector<int> a(n);
		fr(n) {
			cin >> a[i];
		}

		int ans = 0;
		fr(n - 1) {

			if ((float)max(a[i], a[i + 1]) / min(a[i], a[i + 1]) > 2) {
				int mini = min(a[i], a[i + 1]);
				int maxi = max(a[i], a[i + 1]);
				while (maxi > 2 * mini) {
					mini *= 2;
					ans++;
				}
			}
		}

		cout << ans << el;
 
	}


}