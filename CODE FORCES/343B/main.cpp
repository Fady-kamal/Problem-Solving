#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
#define fr(n) for(int i=0;i<n;i++)
 



int main() {

	string s;

	cin >> s;

	int n = s.size();
	stack<char> st;


	fr(n) {

		//if the stack is empty 
		if (st.empty()) {
			st.push(s[i]);
		}

		else {

			if (st.top() == s[i])
				st.pop();
			else
				st.push(s[i]);
		}

	}

	if (st.empty()) {
		cout << "Yes";
	}

	else
		cout << "No";


}