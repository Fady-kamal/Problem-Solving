#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin >> s;
	for(int i=0; i<s.size(); i++){
		int n1 = s[i] - '0';
		if(n1 % 8 == 0){
			cout << "YES\n" <<  n1;
			return 0;
		}
		for(int j=i+1; j<s.size() ;j++){
			int n2 = n1 * 10 + (s[j] - '0');
			if(n2 % 8 == 0){
				cout << "YES\n" <<  n2;
				return 0;
			}
			for(int k=j+1; k<s.size(); k++){
				int n3 = n2 * 10 + (s[k] - '0');
				if(n3 % 8 == 0){
					cout << "YES\n" <<  n3;
					return 0;
				}
			}
		}
	}
	cout << "NO";
	return 0;
}