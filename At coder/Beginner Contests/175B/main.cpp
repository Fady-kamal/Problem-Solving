

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

	int n;
	cin >> n;

	vector<int> v(n);
	fr(n) {

		cin >> v[i];

	}



	int cnt = 0;
	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			for (int k = j + 1; k < v.size(); k++) {

				if (v[i] == v[j] || v[j] == v[k] || v[i] == v[k])
					;
				else
				{
					if (v[i] + v[j] > v[k] && v[i] + v[k] > v[j] && v[k] + v[j] > v[i])
						cnt++;
				}
			}
		}
	}

	cout << cnt;
}
	


