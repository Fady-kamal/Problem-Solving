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


int main() {

	int n;
	cin >> n;
	vector<int> math, prog, pe;

	fr(n) {
		int x;
		cin >> x;

		if (x == 1) {
			math.push_back(i + 1);
		}

		else if (x == 2) {
			prog.push_back(i + 1);
		}

		else {
			pe.push_back(i + 1);
		}
	}


	if (prog.empty() || pe.empty() || math.empty()) {
		cout << 0 << el;
	}

	else {

		int mini = min(pe.size(), min(prog.size(), math.size()));
		cout << mini << el;

		for (int i = 0; i < mini; i++) {
			cout << math[i] << " " << prog[i] << " " << pe[i] << el;
		}
	}



}