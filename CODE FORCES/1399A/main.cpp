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
	//every person who has no the minmum health is a hero 
	int t;
	cin >> t;
	while (t--) {

		int n;
		cin >> n;
		set<int> st;
		fr(n) {
			int x;
			cin >> x;
			st.insert(x);
		}
		vector<int> v(st.begin(), st.end());
		if (st.size() == 1)
			cout << "YES" << el;

		else {
			bool flag = true;
			for(int i = 1; i < v.size(); i++) {

				if (v[i] - v[i - 1] > 1)
					flag = false;
			}

			if (flag)
				cout << "YES" << el;
			else
				cout << "NO" << el;

		}

 

	}
}