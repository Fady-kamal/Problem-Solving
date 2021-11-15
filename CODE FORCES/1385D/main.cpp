

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
//
//void printVector(vector<int>& vec) {
//
//    cout << '{';
//    for (int i = 0; i < vec.size(); i++) {
//
//        if (i > 0)
//            cout << ", ";
//        cout << vec[i];
//    }
//
//    cout << '}';
//
//}




bool comp(pair<int, int> x, pair<int, int > y) {
	if (x.first < y.first)
		return true;

	else if (x.first == y.first && x.second > y.second)
		return true;
	else
		return false;
}

char a[140000];

int getCost(int l, int r, char c) {

	/*
	* The function returns the number  of characters which is not equal to to c
	*/


	int cnt = 0;

	for (int i = l; i <= r; i++) {
		if (a[i] != c)
			++cnt;
	}
	
	
	return cnt;
	

}


int getMin(int l, int r, char c) {

	/*
	* This function returns the minimum number of moves to convert the string into c- good string
	*/

	//Base case 
	//the value for which the function is known 


	if (l == r) { //that means the string contains only a single characters

		if (a[l] == c)
			return 0; // there is no moves we need to make
		else
			return 1; // one move to convert a single char  to s 

	}


	//Recursive step 
	else {

		//compute the midpoint 
		int mid = l + (r - l) / 2;
		return min(
			(getCost(l, mid, c) + getMin(mid + 1, r, c + 1)),
			(getCost(mid + 1, r, c) + getMin(l, mid, c + 1))
		);

	}

}

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i =1;i <=n; i++) {
			cin >> a[i];
		}

		int mini = getMin(1, n, 'a');
		cout << mini << el;
	}


}








