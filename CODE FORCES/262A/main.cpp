// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int arr[100];

int main()
{

	int n, k;

	int count = 0; // the number of integers have no more than k lucky digits 


	cin >> n >>  k;

	string s;


	while (n--) {

		int lucky = 0; //the number of lucky digits in the integer 
		cin >> s;


		for (int i = 0; i < s.length(); i++) {


			if (s[i] == '4' || s[i] == '7')
				lucky++;
		}


		//check if the number (s) has no more than k lucky digits
		if (lucky <= k)
			count++;
	}


	cout << count;



	return 0;
}




