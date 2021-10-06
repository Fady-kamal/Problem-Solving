#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll factorial(ll n) {

	//base case where the function is known

	if (n < 1)
		return 1;


	else {

		return n * factorial(n - 1);
	}


}





ll fact[15];
int main() {

	ll p;
	cin >> p;

	for (int i = 0; i < 12; i++) {
 
		fact[i] = factorial(i);
	}


	//for (int i = 0; i < 12; i++)
	//	cout << "factorial(" << i << "): " << fact[i] << endl;


	
	int cnt(0);
	while (p) {


		//find i such that i <= p
		int i;
		for (i = 0; i < 12; i++) {

			if (fact[i] > p)
				break;
		}
		i--;

		

		//if the reminder equals zero 
		if (p % fact[i] == 0) {

			cnt += p / fact[i];
			p = 0;
		}

		else {
			cnt += p / fact[i];
			p = p % fact[i];  //p will be the reminder 

		}		
	
	}

	cout << cnt;
}