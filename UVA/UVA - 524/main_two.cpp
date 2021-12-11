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
//cout << fixed << setpercision(# of digits after the fixed point 

const int N = 3e5 + 5;

bool cmp(int a, int b) {
	
	return a > b;
}
 



int n, Case = 0, ans[20] = { 1 };

bool isPrime(int n) {

	if (n <= 1) {
		return false;
	}
	else {

		for (int i = 2; i <= sqrt(n); ++i) {
			if (n % i == 0)
				return false;
		}
	}


	return true;
}

void backtracking(int L, bool chosen) {

	//if we reach our goal, print the permutation 
	if (L == N) {

		if (!isPrime(ans[N - 1] + 1))
			return;


		cout << 1;
		
		for (int i = 1; i < N; i++) {
			cout << " "  << ans[i];
		}
		cout << el;
		return;

 

	}
}


int main() {
 
}