

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
void printVector(vector<int> & vec) {

	cout << '[';
	for (int i = 0; i < vec.size(); i++) {

		if (i > 0)
			cout << ", ";
		cout << vec[i];
	}

	cout << ']';

}

int main(){


	//cout << t << el;


	int a,  b, c,  d;

	cin >> a >> b >> c >> d;
	 

	int t = -1;
	for (int i = 0; i < 105; i++) {
		for (int j = 0; j < 105; j++) {

			if ((a * i - c * j) == (d - b)) {
				if (t == -1) {
					t = d + c * j;
				}
				else {
					t = min(t, d + c * j);
				}
			}
		}
	}

	cout << t << endl;

}




