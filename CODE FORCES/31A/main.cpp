

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
void printVector(vector<int>& vec) {

	cout << '[';
	for (int i = 0; i < vec.size(); i++) {

		if (i > 0)
			cout << ", ";
		cout << vec[i];
	}

	cout << ']';

}

int main() {

	int n;
	cin >> n;
	vector<int> v(n);
	fr(n) {
		cin >> v[i];
	}

	set<int, greater<int>> result;

	int ans = -1;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {

				if (i == j || j == k || i == k)
					continue;
				else {
					if ((v[i] == (v[j] + v[k])) || (v[j] == (v[i] + v[k])) || (v[k] == (v[j] + v[i]))) {
	/*					int maxi = max(max(i, j), k) + 1;
						int mini = min(min(i, j), k) + 1;
						cout << maxi << " " <<   3 + i  +  j  +  k  - maxi - mini  << " " << mini;
						return 0;*/

						if (v[i] == (v[k] + v[j])) {
							cout << i+1 << " " << j+1 << " " << k+1;
							return 0;
						}
						else if (v[j] == (v[i] + v[k])) {
							cout << j+1 << " " << i+1 << " " << k+1;
							return 0;
						}
						else if (v[k] == (v[i] + v[j])) {
							cout << k+1 << " " << i+1<< " " << j+1;
							return 0;
						}
				
						
					}
				}
			}
		}
	}


	cout << -1;
}




