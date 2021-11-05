

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


 
	string s;
	cin >> s;
	int q;
	cin >> q;
	vector<set<int>> pos(26);


	//hold the possible positions for every letter 
	//set_i have positions of the alphabet letter i in string s
	for (int i = 0; i < s.size(); ++i) {

		pos[s[i] - 'a'].insert(i);
	}


	while (q--) {

		int x;

		cin >> x;

		if (x == 1) {
			int idx;
			cin >> idx;
			char c;
			cin >> c;

			--idx;

			


			//Remove position from the alphabet letter s[idx]
			pos[s[idx] - 'a'].erase(idx);
			

			//set
			s[idx] = c;

			//add position to the alphbet letter c 
			pos[c - 'a'].insert(idx);
		}



	 
		// x= 2
		else {

			int cnt = 0;
			int l, r;
			cin >> l >> r;
			--l, --r;


			for (int i = 0; i < 26; ++i) {

				//to  be in the range[l,r]
				//the idx shoud be satisfy that l<=idx<=r
				auto it = pos[i].lower_bound(l);
				if (it != pos[i].end() && *it <= r)
					cnt++;
			}

			cout << cnt << el;
		}

		


	}

}




