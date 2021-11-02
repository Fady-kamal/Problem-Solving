

#include<bits/stdc++.h>
#define ll long long
#define Pair pair<ll,ll>

using namespace std;
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1;i<=n;i++)
#define el '\n'

int main(){


	int n;
	cin >> n;

	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(n);

	fr(n) {
		cin >> a[i];
	}

	fr(n) {
		cin >> b[i];
	}

	fr(n) {
		c[i] = b[i] - a[i];
	}


	sort(c.begin(), c.end());


	//OBJECTIVE: find all the pairs such that cj < -ci for all j > i -> j belongs to{i+1,n}
	//to find those pairs you need to find the first cj such that cj >= -ci
	//and after finding this value all the previous values will be less than -ci
	//so we can count the number of cjs that less than -ci

	ll cnt = 0;
	fr(n) {


		//the first index st cj >=-ci
		auto idx = lower_bound(c.begin() + (i + 1), c.end(), -c[i]) - c.begin();


		//count all the previous cjs which is less than -ci --> j -> {i+1, idx}
		cnt += idx - (i + 1);

	}

	cout << cnt << el;
}
