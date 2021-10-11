#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main() {

	int n, k, l, c, d, p, nl, np;

	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int one = k * l / nl;
	int two = c * d;
	int three = p / np;

	cout << min(one, min(two, three)) / n;

}