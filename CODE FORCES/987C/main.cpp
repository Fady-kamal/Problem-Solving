

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

	int n;
	cin >> n;
	vector<int> s(n);
	vector<int> c(n);

	fr(n) {
		cin >> s[i];
	}

	fr(n) {
		cin >> c[i];
	}








	int minSum = INT_MAX;
	for (int i = 0; i < n; i++) {



		//costs at the sides 
		int min_right = INT_MAX;
		int min_left = INT_MAX;



		//backward direction
		for (int j = i-1; j >= 0; j--) {


			if (s[j] < s[i]) 
				min_left = min(min_left, c[j]);


		}


		//forward direction 
		for (int k = i + 1; k < n; k++) {


			//the previous greater than the next
			if (s[i] < s[k])
				min_right = min(min_right, c[k]);
	

		}

		if (min_left == INT_MAX || min_right == INT_MAX) continue;
		minSum = min(minSum, (min_left + min_right + c[i]));

	}


	if (minSum == INT_MAX)
		cout << -1;
	else
		cout << minSum; 
}




