 

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;
const int n = 100;
char arr[n];

string lower_case(string word) {

	for (int i = 0; i < word.length(); i++) {
		word[i] = tolower(word[i]);
	}

	return word;

}
string upper_case(string word) {

	for (int i = 0; i < word.length(); i++) {
		word[i] = toupper(word[i]);
	}

	return word;

}
 
 


int main()
{

	string word;
	cin >> word;

	string sub = word.substr(1, word.length() - 1);


	//if it only contains upper case letters 
    //change the case of the letters
	//upper --> lower  
	if (word == upper_case(word)) {

		cout << lower_case(word);
	}

	//or all letters except for the first one are uppercase.
	//change the case of the letters
	//upper --> lower and lower --> upper
	else if (word[0] == tolower(word[0]) && sub == upper_case(sub)) {
		//cast the value because we don't need it to be integer value
		cout << (char)toupper(word[0]) + lower_case(sub);
	}

	else
		cout << word;
		

 
		
}





