 

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;


int main()
{

	int t;
	cin >> t;



	while (t--) {

		ll n;
		cin >> n;
		bool flag = false;

		if (n % 2 == 1) {

			cout << "YES" << endl;
		}


		else {

			ll reminder = n / 2;

			while (reminder > 2) {
 
				if (reminder % 2 == 1)
					flag = true;

				reminder /= 2;

			}

			cout << (flag == true ? "YES" : "NO") << endl;
		}


	}




}

