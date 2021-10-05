// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <numeric>;

using namespace std;
int b[100];
int l[100];



int main()
{

	int n, m;
	cin >> n>> m;

	//populate b array 
	for (int i = 0; i < m; i++) {
		cin >> b[i];


		int num = b[i];

		for (int j = num - 1; j < n; j++) {

			if (l[j] == 0)
				l[j] = num;


		}
	}



	//display the array
	for (int i = 0; i < n; i++) {
		cout << l[i] << " ";
	}


}




