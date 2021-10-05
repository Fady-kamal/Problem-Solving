// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;
int A[100];



int main()
{

	int n, k;
	int cnt = 0; //the number of contestants who advance to the next round
	cin >> n >> k;

	//populate b array 
	for (int i = 0; i <= n; i++) {
		cin >> A[i];
	}

	int  sum = 0;

	sum = accumulate(A, A + n, sum);

	if (sum <= 0)
		cout << 0;

	else {

		for (int i = 0; i < n; i++) {

			if (A[i] >= A[k - 1] && A[i]  > 0)
				cnt++;
		}


		cout << cnt;

	}

	//display the array
	//for (int i = 1; i <= n; i++) {
	//	cout << I[i] << " ";
	//}


}




