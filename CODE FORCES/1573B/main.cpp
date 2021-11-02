

#include<bits/stdc++.h>
#define ll long long
#define Pair pair<ll,ll>

using namespace std;
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1;i<=n;i++)
#define el '\n'

int main()


/*
* Approach: find the minum sum of indexes for two elements in a ,b 
* such that the element of a < element of b
* 
*/
{

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> pos(2 * n + 5);


		fr(n) {
			int x;
			cin >> x;

			//return the position of x
			pos[x] = i;
		}


		fr(n) {
			int x;
			cin >> x;
			pos[x] = i;
		}

		int min_idx = 1e9;


		//mp[i] returns the smallest index for value less than or equal to i
		map<int, int> mp;


		//Scan the indexes of the odd numbers 
		for (int i = 1; i < 2 * n; i += 2) {
			min_idx = min(min_idx, pos[i]);
			mp[i] = min_idx;
		}


		//scan the indexes of the even numbers 
		int ans = 1e9;
		for (int i = 2; i <= 2 * n; i+= 2) {
			//find the minum sum of indexes 
			//you sum every element in b with the smallest index 
			//for element in a less than the element in b
			//and you ge the minum sum out of those sums 
			ans = min(ans, pos[i] + mp[i - 1]);
		}


		cout << ans << el;



	}


}
