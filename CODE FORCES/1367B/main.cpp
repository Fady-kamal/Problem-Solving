#include <iostream>
using namespace std;

int arr[40];

int main() {

	int t;
	int n;

	cin >> t;

	while (t--) {

		cin >> n;

		/*
		* right: the number of terms that in  the right indices
		* odd_in_even: the number of odd terms in the even indices
		* even_in_odd: the number  of even terms in the odd indices
		*/
		int right = 0, odd_in_even = 0, even_in_odd = 0;

		//populate the array 
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}


		for (int i = 0; i < n; i++) {

			//if the index is divisible by 2 (even parity)
			if (i % 2 == 0) {

				//check if the parity of the number matches their index
				if (arr[i] % 2 == 0)
					right++;
				else
					odd_in_even++;
			}

			//if not (odd parity)
			else {

				//check if the parity of the number matches their index
				if (arr[i] % 2 == 1)
					right++;
				else
					even_in_odd++;
			}

	
			
		}
		//check the three counters 
		if (right == n)
			cout << 0 << endl;
		else if (odd_in_even == even_in_odd)
			cout << odd_in_even << endl;
		else
			cout << -1 << endl;
	}


	
}