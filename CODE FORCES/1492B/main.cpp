#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{


	int t;
	cin >> t;


	while (t--) {
		int n;
		cin >> n;
		vector<int>  p(n);
		vector<int> position(n + 1);

		for (int i = 0; i < n; i++) {
			cin >> p[i];
			position[p[i]] = i;  //lookup table 

		}


		int start = 0;
		int current_max = n;

		for (int i = n; i > 0; i--) {

			start = position[i]; //index of element i 

			if (current_max > start) {

				for (int j = start; j < current_max; j++) {
					cout << p[j] << " ";
				}


				current_max = start;
			}
		}

		cout << endl;


	}

}
