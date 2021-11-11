

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
#define fast  ios::sync_with_stdio(0), cin.tie(0) , cout.tie(0)


 

int N, numTracks, maxi;
vector<int> track, optimalPath, chosen;

void init() {
	maxi = 0;
	optimalPath.clear();
	track.clear();
	chosen.clear();
}

void check() {
	int sum = 0;
	for (auto it : chosen) {
		sum += it;
	}

	if (sum > maxi && sum <= N) {
		maxi = sum;
		optimalPath = chosen;
	}

}

void solve(int idx) {

	//work done !
	if (idx == numTracks) {
		check();
		return;
	}

	else {

		//choose
		chosen.push_back(track[idx]);



		//explore 
		solve(idx + 1);


		//Un-choose
		chosen.pop_back();
		solve(idx + 1);

	}

}

 
int main()
{
	while (cin >> N) {
		init();
		cin >> numTracks;
		for (int i = 0; i < numTracks; i++) {
			int x;
			cin >> x;
			track.push_back(x);
		}
		solve(0);

		for (auto it : optimalPath) {
			cout << it << " ";
		}

		cout << "sum:" << maxi<< endl;
	}


}





