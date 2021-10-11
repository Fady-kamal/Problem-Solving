#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
void printvector(vector<int>& vec) {

	cout << '[';
	for (int i = 0; i < vec.size(); i++) {

		if (i > 0)
			cout << ", ";
		cout << vec[i];
	}

	cout << ']';


}


/*
* Required: minmum number of filter (if needed)
*
* Approach:
* --------
* - we will use filters if and only if the number of sockets less
*   than the number of devices. At that case we need additional device
*   have more sockets to connect the devices to it then connect it
*   to the socket
*
*
*/



int main() {

	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(n);


	for (int i = 0; i < n; i++) {

		cin >> a[i];
	}


	//sort + reverse the array 
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());



	//if the number of electrical sockets > # od of devices
	//there is no need for the line filters
	if (k >= m)
		cout << 0 << endl;



	//else 
	//we need external help
	//we need the some of the line filters to connect all devices 

	else {

		int sum(0);
		int cnt(0);

		for (int i = 1; i <= n; i++) {

			if (k == 0)
				break;

	
			sum += a[i - 1];

			if ((sum + k - i >= m) && (k >= 0)) {
				cout << i << endl;
				return 0;
			}

		}


		cout << -1 << endl;


	}
}