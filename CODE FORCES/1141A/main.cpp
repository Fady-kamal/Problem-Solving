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


int main() {
	int m, n;

	cin >> n >> m; /// m could be = result * n , result could be = 2 ^a * 3 ^b

	int result = m / n;


	if (m % n != 0)
		cout << -1 << el;

	else {

		//check if result could be = 2 ^ a * 3 ^ b
		//if if could be, result should be reduced to one 
		int cnt(0);
		
		while (result % 3 == 0) {
			result /= 3;
			++cnt;
		}

		while (result % 2 == 0) {

			result /= 2;
			++cnt;
		}


		if (result == 1)
			cout << cnt;
		else
			cout << -1;

	}

}