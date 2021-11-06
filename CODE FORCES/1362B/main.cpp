

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

unsigned int countSetBits(unsigned int n) {

	unsigned  int cnt = 0;

	while (n) {
		cnt += n & 1;
		//remove the last bit 
		n >>= 1;
	}
	
	return cnt;
}



void solve() {
	int s;
	cin >> s;
	set<int> st;
	fr(s) {
		int x;
		cin >> x;
		st.insert(x);
	}

	 
	int mask;
	for (mask = 1; mask <= (1 << 10); mask++) {
		set<int> new_st;
		for(auto it: st) {
			new_st.insert(it ^ mask);
		}

		//check if the two set are the same or now 
		bool result = equal(all(st), all(new_st));

		if (result == true) {
			cout << mask << el;
			return;
		}

	}

	cout << -1 << el;
}


int main()
{



	int t;
	cin >> t;
	while (t--) {


		solve();
	}

}




