#include<bits/stdc++.h>
using ll = long long;
using namespace std;
#define el '\n'
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1; i<=n ;i++)
#define fr1l(n) for(int i=1; i< n ;i++)
 


typedef  multiset<int> ms;

int main()
{

	int t;
	cin >> t;
	while (t--) {

		int n;
		cin >> n;
		set<int, greater<>> s;
		while (n--) {
			int x;
			cin >> x;
			if (x % 2 == 0)
				s.insert(x);
		}

		int res(0);
		while (!s.empty()) {

			auto it = s.begin();

			if (*it % 2 == 0) {
				s.insert(*it / 2);
				++res;
			}

			s.erase(it);
		}

		cout << res << el;

	}

 
}