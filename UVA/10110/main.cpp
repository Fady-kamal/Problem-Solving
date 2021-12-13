#include<bits/stdc++.h>
#define ll long long
#define Pair pair<ll,ll>
#include <cstdio>
using namespace std;
#define fr(n) for(int i=0;i<n;i++)
#define frj(n) for(int j=0;j<n;j++)
#define frk(n) for(int k=0;k<n;k++)
#define fr1(n) for(int i=1;i<=n;i++)
#define el '\n'
#define f first 
#define s second
#define all(x) (x).begin(), (x).end()
#define allrev(x) (x).rbegin(), (x).rend()
#define fast  ios::sync_with_stdio(0), cin.tie(0) , cout.tie(0);
//cout << fixed << setpercision(# of digits after the fixed point 

const int N = 3e5 + 5;

bool cmp(int a, int b) {

	return a > b;
}




int n, Case = 0, ans[20] = { 1 };

bool isPrime(int n) {


	if (n <= 1)
		return false;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0)
				return false;
		}
	}

	return true;
}


int main()
{

	/*
	* Idea: the n-th bulb is toggeled once for each
	*       factor from the factors of n
	*
	*   - Odd  presses yield to on mode
	*   - Even presses yield to off mode 
	* 
	*  You should know the fact that every perfect square 
	*  has odd numbers of factors 
	*  so we can check if the number has odd factors or not 
	*  and if the number has odd factors that means that we can toggle the bulb odd times 
	*  so the mode of if after n times will be on 
	*  otherwise, the mode of the bulb will be off 
	*/

	unsigned int n;
	cin >> n;

	while (n != 0) {

		unsigned x = sqrt(n);

		if (x * x == n)
			cout << "yes" << el;

		else
			cout << "no" << el;

	}

}