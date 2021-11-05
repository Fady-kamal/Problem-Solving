

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
void printVector(vector<int> & vec) {

	cout << '[';
	for (int i = 0; i < vec.size(); i++) {

		if (i > 0)
			cout << ", ";
		cout << vec[i];
	}

	cout << ']';

}

int main(){

	int n, m;
	cin >> n >> m;
	string s, t;
	cin >> s >> t;
	vector<ll> l, r;
   /*
   //used to visualize all the ps
    map<char, vector<int>> mp;
	for (int i = 0; i < n; i++) {

		mp[s[i]].push_back(i);
	}
	for (auto it : t) {
		printVector(mp[it]);
		cout << el;
	}

   */
	//get the nearest beautiful sequences from the left 
 
	for (int i = 0, j = 0; i < n; i++) {

		if (s[i] == t[j]) {
			l.push_back(i); //i= Pi
			++j;
		}

		if (j == m)
			break;

	}



	//get the nearest beautiful sequence from the right
	for (int i = n - 1, j = m  - 1 ; i >= 0; i--) {

		if (s[i] == t[j]) {

			r.push_back(i); // i = Pi
			--j;
		}


		if (j == -1)
			break;

	}


	//reverse r because we push r from the greatest to the smallest 
	//and r should be in ascending order 
	reverse(all(r));


	// get the max(diff)
	ll maxi = LLONG_MIN;
	for (int i = 1; i < m ; i++) {
		maxi = max(maxi, abs(r[i ] - l[i - 1]));
	}
 
	cout << maxi;

 
}




