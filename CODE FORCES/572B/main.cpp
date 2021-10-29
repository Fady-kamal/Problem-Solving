#include<bits/stdc++.h>
using ll = long long;
using namespace std;
#define el '\n'
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1; i<=n ;i++)
#define fr1l(n) for(int i=1; i< n ;i++)

 
int main() {

	int n, s;
	cin >> n >> s;
	map<int, int, greater<int>> buy;
	map<int, int> sell;

	while (n--) {

		char d;
		int p, q;
		cin >> d;


		//Sell Orders
		if (d == 'B') {
			cin >> p >> q;
			buy[p] += q;
		}


		//Buy Orders 
		else if (d == 'S') {
			cin >> p >> q;
			sell[p] += q;
		}
	}

	int s1 = s;
	int s2 = s;


	stack<pair<int,int>> st;




	for(auto it : sell){
		st.push(it);
		s1--;
		if (s1 == 0)
			break;
	}
	//for (auto it : sell) {

	//	cout << "S " << it.first << " " << it.second << el;
	//	s1--;
	//	if (s1 == 0)
	//		break;
 //

	//}

	while (!st.empty()) {
		cout << "S " << st.top().first << " " <<  st.top().second << el;
		st.pop();
	}

	for (auto it : buy) {
 
		cout << "B " << it.first << " " << it.second << el;
		s2--;
		if (s2 == 0)
			break;

	}
}