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
	fast; // you will get "time limit exceeds" if don't run this statement  
	int n, t;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<double> v(n);
		double sum = 0;
		double max_a = -1e9;
		fr(n) {
			cin >> v[i];
			if (v[i] > max_a)
				max_a = v[i];
			sum += v[i];
		}
 
		cout << fixed << setprecision(9) << max_a + (sum - max_a)/ (n - 1) << el;
	

	}
}