#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main() {

	ll a, b;
	ll x;
	cin >> a >> b;
	cin >> x;



	if (a > b)
		cout << 0;

	else
	{

		if (a % x == 0)
			cout << (b / x) - (a / x) + 1;
		else
			cout << (b / x) - (a / x);

	}



	




}