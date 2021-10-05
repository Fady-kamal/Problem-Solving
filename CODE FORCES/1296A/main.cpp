#include <iostream>
#include <numeric>
using namespace std;

int arr[2000];

int main() {

	int t;
	int n;

	cin >> t;

	while (t--) {

		cin >> n;

		int count_even = 0, count_odd = 0;

		//populate the array 
		for (int i = 0; i < n; i++) {
			cin >> arr[i];

			if (arr[i] % 2 == 0)
				count_even++;
			else
				count_odd++;
		}

		int sum = 0;

		sum = accumulate(arr, arr + n, sum);



		if (sum % 2 == 1)
			cout << "YES" << endl;

		else { //sum is divisible by two 

			if (count_even == n) //sum of even number is even
				cout << "NO" << endl;
			else if (count_odd == n) //n is even  (even sum of odd numbers = even)

				cout << "NO" << endl; 
			else //(even + odd) or (odd sum of even numbers)
				cout << "YES" <<endl;


		}

	}


	
}