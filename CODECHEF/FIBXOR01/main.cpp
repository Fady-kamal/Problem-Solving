#include <bits/stdc++.h>
using namespace std;
using ll = long long;



/*
The idea:  F(n) = f(n%3) : the series repeats itself after ever 3 numbers(a,b,f(3),a,b,f(6) = f(3),...)

*/

ll  fib(ll a, ll b, ll n) {
	if (n == 0)
		return a;
	else if (n == 1)
		return b;
	else if (n == 2)
		return a ^ b;
	return fib(a, b, n % 3);
}

int main() {
	ll t;
	cin >> t;
	while (t--) {
		ll a, b, n;
		cin >> a >> b >> n;
		cout << fib(a, b, n) << endl;
	}
	return 0;
}


 




