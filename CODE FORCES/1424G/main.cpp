#include<bits/stdc++.h>
using ll = long long;
using namespace std;
#define el '\n'
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1; i<=n ;i++)
#define fr1l(n) for(int i=1; i< n ;i++)


void solve() {

	int n;
	cin >> n;
	vector<vector<int>> v;

	fr(n) {

		int a, b;
		cin >> a >> b;


		// 1 means  one person alive 
		// -1 means one persons died from the alive persons
		v.push_back({ a,1 });
		v.push_back({ b,-1 });
	}


	//sort the vector to track the alive the died persons from  the start year
	// up to the end year 
	sort(v.begin(), v.end());

	//track
	//the first element in the pair represents the year of the people alive
	//the second element in the pair represents the number of people alive corrseponding
	// to this year 
	pair<int, int> mx(0,0);

	int count(0); // count the number of people alive up to certain year 


	for (int i = 0; i < v.size(); i++) {

		// at this moment, it stores the number of people alive
		// up to the year v[i][0]
		count += v[i][1]; 
		                  
		if (count > mx.second) {
			mx.second = count;
			mx.first = v[i][0];
		}

	}


	cout << mx.first << " " << mx.second;

}


int main() {

	solve();
}