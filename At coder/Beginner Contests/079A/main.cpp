#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main() {

	int n;
	cin >> n;

	int n1 = n / 1000;
	int n2 = (n / 100) % 10;
	int n3 = (n / 10) % 10;
	int n4 = n % 10;

	if ((n1 == n2 && n2 == n3) || (n2 == n3 && n3 == n4)) {
		cout << "Yes";
	}

	else {
		cout << "No";
	}

}