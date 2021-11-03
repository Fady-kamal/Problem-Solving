

#include<bits/stdc++.h>
#define ll long long
#define Pair pair<ll,ll>

using namespace std;
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1;i<=n;i++)
#define el '\n'
 
int main() {

	int t;
	cin >> t;
	while (t--) {

		int n;
		cin >> n;
		vector<ll> v(n);
		vector <ll> cnt;
		map<ll, ll> mp;
		fr(n) {
			cin >> v[i];
			mp[v[i]]++;
		}


		for (auto it : mp) {
			cnt.push_back(it.second);
		}

		sort(cnt.begin(), cnt.end());
		set<int> st(cnt.begin(), cnt.end()); //st is val , v is cnt


		ll ans = INT_MAX;


		//cout << el << cnt.size();


		//Loop on every choosen c 
		for (auto c : st) {
			ll total = 0;

			//if f_i >= c -> #elements required to remove is f_i - c
			//else is the # of elements to be removed is f_i
			//in other words choose c and remove the elements that less have count 
			//less than c and reduce the elmenets that have cout greater than c to c 
			for (ll i = 0; i < cnt.size(); ++i) {
				if (cnt[i] >= c)
					total += (cnt[i] - c);
				else
					total += cnt[i];

			}

			//take the minmum number elements required to be removed
			ans = min(ans, total);
		}


		cout << ans << el;


	}

}