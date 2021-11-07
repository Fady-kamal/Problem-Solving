

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




int main()
{


	int t, n, h;

	cin >> t;

	while (t--) {
		cin >> n >> h;
		//construct the first permutation of the number 
		string str = "";


		fr(n) {
			if (i < n - h) {
				str += "0";
			}

			else {
				str += "1";
			}
		}


		do {

			cout << str << el;
		} while (next_permutation(all(str)));

		if (t)
			cout << el;
	}
 
}


	

