

#include<bits/stdc++.h>
#define ll long long
#define Pair pair<ll,ll>

using namespace std;
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1;i<=n;i++)
#define el '\n'
#define f first 
#define s second
#define all(x) (x).begin(), (x).end()
#define allrev(x) (x).rbegin(), (x).rend()

 
int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, w;
		cin >> n >> w;
		vector<int> v(n);
		fr(n) {
			cin >> v[i];
		}

		sort(all(v));
		int max_height = 1;
		int left = w;

		while (!v.empty()) {

			/*cout << "DJFLJFD" << el;*/

			//find the index of the element greater than the left space 
			auto idx = upper_bound(all(v), left);

			//if no space, move to the next level 
			if (idx == v.begin()) {


				//go to the next level 
				max_height++;

				//reset the left 
				left = w;
			}
			

			//if there

			else {

				//get the index of the element less than w or equals to w
				--idx;


				//reduce the left 
				left -= (*idx);

				//remove the choosen element 
				v.erase(idx);

			}



		}
		cout << max_height << el;
	}
}