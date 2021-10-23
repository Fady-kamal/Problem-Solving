#include<bits/stdc++.h>

 

using ll = long long;
using namespace std;

 

int main() {

	string s;

	cin >> s;

	//the number of sins needed 
	int numberOfSigns = s.size() - 1;

	ll fin = 0;

	for (int mask = 0; mask < (1 << numberOfSigns) ; mask++) {

		ll currentSum = 0;
		ll sofar = 0;

		//ith bit in the mask indicates that there is a sign after the ith element or not 
		//Loop on every bit in mask 
		for (int i = 0; i < numberOfSigns; i++) {

			//take the ith element is s--> sofar = s_i
			sofar = sofar * 10 + (s[i] - '0');

			//check if the bit at position i is set or not 
			if ((mask >> i) & 1) {
				//there is + 
				currentSum += sofar;
				sofar = 0; //reset sofat to take another variable 

			}

		
		}
		//add the last element 
		sofar = sofar * 10 + (s[numberOfSigns] - '0');
		currentSum += sofar;

		//the format fo the output
		fin += currentSum;



	}

	cout << fin << endl;

}
 
