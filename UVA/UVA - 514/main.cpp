#include<bits/stdc++.h>
using ll = long long;
using namespace std;
#define el '\n'
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1; i<=n ;i++)
#define fr1l(n) for(int i=1; i< n ;i++)
int main()
{
 
	int n;


	//Read the value until it's equals to 0
	while (cin >> n, n)
	{
 
		vector<int> r(n); //required order 

		while (cin >> r[0], r[0])
		{
			//populate the vector 
			fr1l(n) {
				cin >> r[i];
			}


			stack<int> st;
 
			int idx_r = 0;

		 
			fr1(n){

				st.push(i);

				
				while (!st.empty() && st.top() == r[idx_r] ) {
					st.pop();
					idx_r++;
				}

				
			}

			if (st.empty()) {
				cout << "Yes" << el;
			}

			else
				cout << "No" << endl;

			
		}
		cout << el;
	}	



}