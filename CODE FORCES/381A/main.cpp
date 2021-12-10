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
 

int main() {

	int n;
	cin >> n;

	vector<int> v(n);
	fr(n) {
		cin >> v[i];
	}

 
	int sum_s = 0, sum_d = 0;

	int left = 0; 
	int right = n - 1;
	int taken = n;
	int turn = 0;

	while (taken != 0) {

		if (turn % 2 == 0) {
			if(v[left] > v[right]){
				sum_s += v[left];
				++left;
			}

			else {
				sum_s += v[right];
				--right;
			}
		}

		else {
			if (v[left] > v[right]) {
				sum_d += v[left];
				++left;
			}

			else {
				sum_d += v[right];
				--right;
			}
		}

		--taken;
		++turn;

	}

	cout << sum_s << " " << sum_d;

}