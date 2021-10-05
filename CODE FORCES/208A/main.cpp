// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;


string arr[100000];
 
int main()
{

	string str;
	cin >> str;
	
	//find the idx of the first character in the word that we want to remove 
	int idx = str.find("WUB");
	 
	int pos = 0;

	while (idx != -1) {

		str.replace(idx,3, " ");

		idx = str.find("WUB");

	}

	for (int i = 0; i < str.length(); i++) {

		

		if (str[i] != ' ') {
			pos = i;
			break;
		}
	}


	cout << str.substr(pos, str.length() - pos);

}
 
