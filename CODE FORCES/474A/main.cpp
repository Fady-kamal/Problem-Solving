// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;
void correct_message(char move, string msg);


int main()
{

	char move;
	string msg;

	cin >> move;
	cin >> msg;
	
	correct_message(move, msg);


}

void correct_message(char move, string msg) {

	string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
	int idx[105] = {};

	for (int i = 0; i < msg.length(); i++) {
		idx[i] = key.find(msg[i]);
	}

	if (move == 'R') {

		for (int i = 0; i < msg.length(); i++) {
			cout << key[idx[i] - 1];
		}

	}

	else {

		for (int i = 0; i < msg.length(); i++) {
			cout << key[idx[i] + 1];
		}
		 
	}


 
	

}