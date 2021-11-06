

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

unsigned int countSetBits(unsigned int n) {

	unsigned  int cnt = 0;

	while (n) {
		cnt += n & 1;
		//remove the last bit 
		n >>= 1;
	}
	
	return cnt;
}



void solve() {
	int a, b, c;
	cin >> a >> b >> c;

	for (int x = -100; x <= 100; x++) {

		for (int y = -100 ; y <= 100; y++) {
			int z = a - (x + y);
		
			if (z == x || z == y || x == y)
				continue;


			if (x * y * z == b && (x*x) + (y*y ) + (z*z) == c) {
				cout << x << " " << y << " " << z << el;
				return;
			}
		}


	}


	cout << "No solution." << el;
}


int main()
{
	fast;
	int n;
	cin >> n;

	while (n--) {
	
		solve();
	}
}




