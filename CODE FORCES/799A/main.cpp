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


	if (n <= 1)
		return false;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0)
				return false;
		}
	}

	return true;
}









int main() {

	int n, t, k, d;
	cin >> n >> t >> k >> d;


	//the total number of groups 
	int g = (n + k - 1) / k;
	int o1 = 0, o2 = d;


	//compute the time needed to bake using one ovan 
	int time_one = g * t;

	//compute the time needed to bake using two ovans 
	fr(g) {

		if (o1 <= o2)
			o1 += t;
		else
			o2 += t;
	}

	int time_two = max(o1, o2);
	if (time_two < time_one)
		cout << "YES";
	else
		cout << "NO";





}