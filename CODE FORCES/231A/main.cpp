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

vector<int> result;
vector<int> vec;
void computeDepth(int l, int r, int depth) {

	//base case 
	// the value for which the function is known 
	// it is the stopping point 
	if (l > r) { //trivial 

		return;
	}



	//recursive case 
	//we need to make progress toward  the stopping point --> the base case
	//we need to solve it recursively 
	else {

		int max_idx;
		int maxi = INT_MIN;




		//Step One: divide the problem 
		//get the max of the sub-problem
		for (int i = l; i <= r; i++) {
			if (vec[i] > maxi) {
				maxi = vec[i];
				max_idx = i;
			}
		}


		result[max_idx] = depth;
		//Step Two: recursively solve
		//The solution of the whole is derived from the smaller problems 
		computeDepth(l, max_idx - 1, depth + 1);
		computeDepth(max_idx + 1, r, depth + 1);


	}

}

void init() {
	vec.clear();
	result.clear();
}

int main() {

	int n;
	cin >> n;
	int result = 0;
	while (n--) {
		int sum = 0;
		fr(3) {
			int x;
			cin >> x;
			sum += x;
		}

		result += sum / 2;
	}

	cout << result << el;
}