#include<bits/stdc++.h>

using ll = long long;
using namespace std;


int get_first(vector<int> a, vector<int> b) {

	for (int i = 0; i < a.size(); i++) {

		if (a[i] != b[i])
			return i;
	}


	return 0;
}



int get_end(vector<int> a, vector<int> b) {

	for (int i = a.size() - 1; i >= 0; i--) {

		if (a[i] != b[i])
			return i;
	}


	return 0;
}






int main() {


	int t;
	cin >> t;

	while (t--) {

		int n;
		cin >> n;
		vector<int> a(n);
		vector<int> b(n);

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}

		int start = get_first(a, b);
		int end = get_end(a, b);

		//cout << "start:" << start << endl << "end: " << end << endl;


		int diff = a[start] - b[start];
		//cout << "diff" << diff << endl;
		bool flag = false;



		if (diff > 0)
			cout << "NO" << endl;

		else {


			if (start == end) {

				cout << "YES" << endl;

			}


			else {





				for (int i = start + 1; i <= end; i++) {


					if (a[i] - b[i] == diff) {
						flag = true;

					}

					else {

						flag = false;

						cout << "NO" << endl;
						break;

					}
						
				}

			}

		}


		if (flag == true)
			cout << "YES" << endl;





		}



	}


