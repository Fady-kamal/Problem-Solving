// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;

ll  div_moves(ll a, ll b);

int main()
{
	int t;
	cin >> t;

	while (t--) {
		ll a, b;
		cin >> a >> b;
		ll moves = div_moves(a, b);
		cout << moves << endl;
	}

}

ll div_moves(ll a, ll b) {
	
	ll cnt(0);
	ll reminder = a % b;
	//while (reminder % b != 0) {
	//	reminder += 1;
	//	cnt++;
	//}

	//return cnt;

	if (a % b == 0)
		return 0;

	else
		return b - reminder;


}

