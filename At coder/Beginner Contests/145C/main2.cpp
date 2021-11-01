

#include<bits/stdc++.h>
#define ll long long
#define Pair pair<ll,ll>

using namespace std;


int main() {

	
	int n;
	cin >> n;
	ll x, y;
	vector<Pair> V;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		V.push_back(make_pair(x, y));
	}

	double sum = 0.0;

	sort(V.begin(), V.end());


	int cnt  = 0;
	do {

		++cnt;
		for (int i = 0; i < n - 1; i++) {

			sum += sqrt(pow(V[i].first - V[i + 1].first, 2) + pow(V[i].second - V[i + 1].second, 2));
		}
	} while (next_permutation(V.begin(), V.end()));
	
	cout<<fixed <<setprecision(12)<< sum/ cnt;


}