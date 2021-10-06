#include <bits/stdc++.h>

using namespace std;

using ll =  long long;


int main() {

	ll  n, m, a;

	cin >> n >> m >> a;

	ll value = ceil((double)m/a)*ceil((double)n/a);

	cout << value;

}