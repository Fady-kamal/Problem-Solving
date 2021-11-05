

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

	int n, a, b, c;
	cin >> n >> a >> b >> c;

	int maxi = INT_MIN;
	for (int x = 0; x <= 4000; x++) {

		for (int y = 0; y <= 4000; y++) {

			int zc = n - x * a - y * b;

			if (zc < 0)
				break;

			//given c find z 
			double z = zc / (double)c;

			if (z == int(z))
				maxi = max(maxi, x + y + (int)z);
		}


	}

	cout << maxi;
}




