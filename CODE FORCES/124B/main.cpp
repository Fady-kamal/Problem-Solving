

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




int main()
{


	int n, k;
	cin >> n >> k;
	vector<string> v(n);
	fr(n) {
		cin >> v[i];
	}

	vector<int> Permute(k);
	fr(k) {
		Permute[i] = i;
	}
	int min_diff = INT_MAX;

	do {
		int mini = INT_MAX;
		int maxi = INT_MIN;
		//convert every number from string format to int format + Rearrangement 
		fr(n) {
			int int_form = 0;
			frj(k) {
				(int_form *= 10) += v[i][Permute[j]];
			}


			//get the min and max number correponds to this permutation 
			mini = min(mini, int_form);
			maxi = max(maxi, int_form);
		}


		min_diff = min(min_diff, maxi - mini);



	} while (next_permutation(all(Permute)));


	cout << min_diff;
 
}




