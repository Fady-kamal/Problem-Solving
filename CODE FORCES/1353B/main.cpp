#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int A[30];
int B[30];

int main() {

	int t;
	unsigned int n, k;

	cin >> t;

	while (t--) {

		int sum = 0;

		cin >> n;
		cin >> k;


		//populate the second array 
		for (int i = 0; i < n; i++) {
			cin >> A[i];

		}

		//populate the first  array 
		for (int i = 0; i < n; i++) {
			cin >> B[i];

		}


		sort(A, A + n);
		sort(B, B + n);

	

		for (int i = 0; i < k; i++) {

			if (A[i] < B[n - i - 1]) A[i] = B[n - i - 1];
		
			
		}
		
		sum = accumulate(A, A + n, sum);


		cout << sum << endl;

	}


	
}