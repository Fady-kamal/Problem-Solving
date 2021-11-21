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


bool cmp(int a, int b) {

	return a > b;
}


//const int N = 1e6;

int main() {

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		ll v[n];


		//populate the array
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		sort(v, v + n, cmp);


		ll sol_one = v[0] * v[1] * v[2] * v[3] * v[4];
		ll sol_two = v[0] * v[1] * v[2] * v[n - 1] * v[n - 2];

		ll sol_three = v[0] * v[n - 1] * v[n - 2] * v[n - 3] * v[n - 4];


		cout << max(max(sol_one, sol_two), sol_three) << el;

	}

}
