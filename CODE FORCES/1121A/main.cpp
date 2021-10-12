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


int getIndex(string name, char element) {

	int index = -1;

	for (int i = 0; i <= name.length(); i++) {

	

		if (element == name[i])
			index = i;
	}



	return index;

}





int main() {

	int n, m, k;
	cin >> n >> m >> k;

	vector<int> P(n);
	vector<int> S(n);
	vector<int> C(k);

	for (int i = 0; i < n; i++) {
		cin >> P[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> S[i];
	}

	for (int i = 0; i < k; i++) {
		cin >> C[i];
	}




	int make_up = 0;

	//Loop on every choosen student
	for (int i = 0; i < k; i++) {

		//get his power and his school number 
		int power = P[C[i] - 1];
		int School_belongs_to = S[C[i] - 1];

		


		//compare his power with his schoolmates
		for (int j = 0; j < n; j++) {


			//if he is not the strongest make new schools
			if (S[j] == School_belongs_to) {

				if (P[j] > power) {
					make_up++;
					break;
				}
					


			}

		}

	}


	cout << make_up;








}