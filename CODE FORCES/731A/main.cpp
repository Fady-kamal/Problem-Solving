#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
void printvector(vector<int>& vec) {

	cout << '[';
	for (int i = 0; i < vec.size(); i++) {

		if (i > 0)
			cout << ", ";
		cout << vec[i];
	}

	cout << ']';


}


/*
* Required: minmum number of filter (if needed)
*
* Approach:
* --------
* - we will use filters if and only if the number of sockets less
*   than the number of devices. At that case we need additional device
*   have more sockets to connect the devices to it then connect it
*   to the socket
*
*
*/


int getIndex(string name, char element) {

	int index = -1;

	for (int i = 0; i <= name.length(); i++) {

	

		if (element == name[i])
			index = i;
	}



	return index;

}





int main() {

	string alphabet = "abcdefghijklmnopqrstuvwxyz";


	string name;

	cin >> name;


	int start_index = 0;
	int num_moves(0);
	for (int i = 0; i < name.length(); i++) {


		//the index of the number ,which we want to reach,in the alphabet 
		int end_index = getIndex(alphabet, name[i]);

		int distance = abs(end_index - start_index);


		if (distance <= 13)
			num_moves += distance;

		else
			num_moves += (26 - distance);


		//to restart at the last index of the number that we reached 
		start_index = end_index;

	}

	cout << num_moves;



}