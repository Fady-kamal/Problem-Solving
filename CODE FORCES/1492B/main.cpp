#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int getIndex(vector<int> vec, int element, char direction) {

	/*
	*
	* Usage:
	*  #get the first index of the given element
	*
	* Arguments:
	*  #vec: the vector searched for the index of a given element
	*  #element: the number that we want to know its index
	*  #direction: search from left to right "L" or from right to left "R"
	*
	* return:
	*  #index: the index of the element. It returns -1 if the element
	*          is not int the vec
	*
	*/

	int index = -1;


	if (direction == 'L') {

		for (int i = 0; i < vec.size(); i++) {

			if (element == vec[i]) {
				index = i;
				break;
			}

		}

	}

	else if (direction == 'R') {

		for (int i = vec.size() - 1; i >= 0; i--) {

			if (element == vec[i]) {
				index = i;
				break;
			}

		}

	}
	return index;
}



//void printVector(vector<int>& vec) {
//
//	cout << '[';
//	for (int i = 0; i < vec.size(); i++) {
//
//		if (i > 0)
//			cout << ", ";
//		cout << vec[i];
//	}
//
//	cout << ']';
//
//}

int main()
{


	int t;
	cin >> t;


	while (t--) {
		int n;
		cin >> n;
		vector<int>  p(n);
		vector<int> position(n + 1);

		for (int i = 0; i < n; i++) {
			cin >> p[i];
			position[p[i]] = i;  //lookup table 

		}


		int start = 0;
		int end = n;

		for (int i = n; i > 0; i--) {

			start = position[i]; //index of element i 

			if (end> start) {

				for (int j = start; j < end; j++) {
					cout << p[j] << " ";
				}


				end = start;
			}
		}

		cout << endl;


	}

}