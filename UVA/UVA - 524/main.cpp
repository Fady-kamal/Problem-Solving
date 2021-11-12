

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

void printVector(vector<int> & vec) {

	cout << '{';
	for (int i = 0; i < vec.size(); i++) {

		if (i > 0)
			cout << ", ";
		cout << vec[i];
	}

	cout << '}';

}


int n, tc;
vector<int> chosen;
vector<vector<int>> ans;

void init() {
	chosen.clear();
	ans.clear();
}

bool isPrime(int n) {


	if (n <= 1)
		return false;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0)
				return false;
		}
	}

	return true;
}

void solve(int pos) {

	//work done, searchign finished 
	if (pos == n) {

		//check the end points
		if (isPrime(chosen[n - 1] + 1))
			ans.push_back(chosen);

		 
	}

	else {
		
		for (int i = 2; i <= n; i++) {

			//Choose the unrepeated numbers 
			//check if we choose the number or not 
			if (find(all(chosen), i) != chosen.end()) {
				continue;
			}
			//check if the number is prime or not 
			if (!isPrime((chosen[pos - 1] + i)))
				continue;

			chosen.push_back(i);


			//Explore what could follow after that 
			solve(pos + 1);  


			//un-choose 
			chosen.pop_back();
		}

	}
}

void Print() {
	if (tc > 0)
		cout << endl;
	cout << "Case " << ++tc << ":\n";
	for (auto v : ans) {
		for (int x : v) {
			cout << x;
			if (x != v[n - 1])
				cout << " ";
		}
		cout << endl;
	}
}
int main()
{
	while (cin >> n) {
		init();
		chosen.push_back(1);
		solve(1);
		Print();
	}

	 
}
