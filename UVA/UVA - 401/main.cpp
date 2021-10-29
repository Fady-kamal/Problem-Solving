

#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath> 
typedef long long ll;
using namespace std;
 
#include<string.h>
#include<ctype.h>

bool isPalindrome(string s) {

	/*
	*
	*  Palindrome: a word or group of words that is the same when you read it
	*  forwards from the beginning or backwards from the end
	*/

	if (s.length() < 2) {

		return true;
		//base case
		//the value of the function is known

	}

	else {

		//hard to solve
		//need recursive calls 

		char first = s[0];
		char last = s[s.length() - 1];

		if (first == last) { //keep going 

			string rest = s.substr(1, s.length() - 2);

			return isPalindrome(rest);

		}

		else { //stop 
			return false;
		}

	}

  
}

char mirroredChar(char a)
{
    switch (a)
    {
    case 'A':
        return 'A';
    case 'E':
        return '3';
    case 'H':
        return 'H';
    case 'I':
        return 'I';
    case 'J':
        return 'L';
    case 'L':
        return 'J';
    case 'M':
        return 'M';
    case 'O':
        return 'O';
    case 'S':
        return '2';
    case 'T':
        return 'T';
    case 'U':
        return 'U';
    case 'V':
        return 'V';
    case 'W':
        return 'W';
    case 'X':
        return 'X';
    case 'Y':
        return 'Y';
    case 'Z':
        return '5';
    case '1':
        return '1';
    case '2':
        return 'S';
    case '3':
        return 'E';
    case '5':
        return 'Z';
    case '8':
        return '8';
    default:
        return '*';
    }
}



bool isMirrored(string str)
{
    string ss = str;
    for (int i = 0; i < ss.size(); i++)
    {
        ss[i] = mirroredChar(ss[i]);
    }
    reverse(ss.begin(), ss.end());
    if (ss == str) return true;
    return false;
 
}


int main()
{

	string word;

    while (cin >> word) {

        //if the string is not a palindrome and is not a mirrored string --> is not a palindrome
        if (isPalindrome(word) == false && isMirrored(word) == false)
            cout << word << " -- is not a palindrome." << endl;

        //if the string is a palindrome and is not a mirrored string
        else if (isPalindrome(word) == true && isMirrored(word) == false)
            cout << word << " -- is a regular palindrome." << endl;

        //if the string is not a palindrome and is a mirrored string
        else if (isPalindrome(word) == false && isMirrored(word) == true)
            cout << word << " -- is a mirrored string." << endl;

        else
            cout << word << " -- is a mirrored palindrome." << endl;


        cout << endl;
    }	




}





	