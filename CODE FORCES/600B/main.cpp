

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


int main() {

	int n, m;
	cin >> n >> m;
	vector<ll> a(n), b(m);

	fr(n) {
		cin >> a[i];
	}

	fr(m) {
		cin >> b[i];
	}

	vector<ll> result;


	sort(a.begin(), a.end());

	fr(m) {

		//the index of the first element greater than or equals to r
		auto it = upper_bound(all(a), b[i]);

		if (it != a.end())
			result.push_back(it - a.begin());

		else {
			 
			if (it - a.begin() == b[m - 1]);
				result.push_back(it - a.begin());
		}
	}


	for (auto it : result)
		cout << it << ' ';

}




