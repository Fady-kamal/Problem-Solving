// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <numeric>
typedef long long ll;

using namespace std;
ll A[50];
ll B[50];



int main()
{

	int t;
	cin >> t;

	while (t--) {
		ll moves = 0;

		int n;
		cin >> n;

		//populate the arrays
		for (int i = 0; i <  n; i++) {
			cin >> A[i];	
		}

		for (int i = 0; i <  n; i++) {
			cin >> B[i];
		}

		


		//find the minmum element in A and B
		ll minA = *min_element(A, A + n);
		ll minB = *min_element(B, B + n);

		for (int i = 0; i < n; i++) {

			ll diffA,diffB;

			if (A[i] > minA && B[i] > minB) {

				diffA = A[i] - minA;
				diffB = B[i] - minB;
	 

				if (diffA > diffB)
					moves += diffA;
				else 
					moves += diffB;
			}

			else if (A[i] > minA && B[i] == minB) {

				diffA = A[i] - minA;
				moves += diffA;
			}
			else if (B[i] > minB && A[i] == minA) {
				diffB = B[i] - minB;
				moves += diffB;
			}

			else
				; //null statement
		}


		cout << moves << endl;







	}

}




