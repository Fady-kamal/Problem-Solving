#include <cmath>
#include <iostream>
typedef long long ll;
using namespace std;;
ll f(ll n);

int main()
{

	ll n;

	cin >> n;

	cout << f(n);
}


ll f(ll n) {


	if(n % 2 == 0)  {

		return n / 2;
	}
    else {

    	return ((n + 1) / 2) * -1;
    }
}