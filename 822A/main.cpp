#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll factorial(ll n) {


	///base case 
	if (n <= 1) {
		return 1;
	}


	//recursive case
	else {

		return n * factorial(n - 1);
	}

}



int main() {

	int A, B;

	cin >> A >> B;

	cout << factorial(min(A,B));
 


}




