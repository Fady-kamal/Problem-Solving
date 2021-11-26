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


vector<ll> avengers;
ll n,k,A,B;


//minPower(l,r) returns minmum power needed to destroy 1 to r (inclusive)

ll min_power(ll  l, ll r)
{


	//compute the number of anvengers in the base[l to r]

 	//i: idx of the first value greater than or equals l
	ll i = lower_bound(all(avengers), l) -  avengers.begin();
	//j: idx of the fisrt value greater than r
	ll j = upper_bound(all(avengers), r) - avengers.begin();
	--j;

	//compute the number of avengers of the current base 
	ll x = j - i +1; 
	ll power_consumed;


	if(x == 0)
		power_consumed = A;

	else{
		power_consumed = B * x * (r - l + 1);
	}

	if(l == r || x == 0)
		return power_consumed;

	ll mid = l + (r - l) /2;

	//taking the minmum of the two operations
	ll minPower = min(power_consumed, min_power(l, mid) + min_power(mid+1, r));

	return minPower;
}


int main(){
	fast;

	cin >> n >> k  >> A >> B;

	fr(k){
		int val;
		cin >> val;
		avengers.push_back(val);
	}

	sort(all(avengers));

	ll x = (ll) 1 << n;
	cout << min_power(1,x) << el;
	return 0;
}