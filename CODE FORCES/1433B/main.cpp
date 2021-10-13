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





int getIndex(vector<int> vec, int element,char direction) {

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








int main() {

	int t;
	cin >> t;


	while (t--) {
		
		int n; 
		cin >> n;
		vector<int> A(n);

		//populate the array 
		for (int i = 0; i < n; i++) {
			cin >> A[i];
		}


		int sum = 0;
		sum = accumulate(A.begin(), A.end(),sum);


		//counter counts the number of zeros between the first 
		//one and last one 
		int num_zeros = 0;

		if (sum == 1)
			cout << 0 << endl;

		else {
			


			//get the index of the first one from left side of the vector 
			int start_index = getIndex(A, 1, 'L');


			//get the index of the first one from right side of the vector 
			int end_index = getIndex(A, 1, 'R');


			for (int i = start_index; i <= end_index; i++) {

				if (A[i] == 0)
					num_zeros++;
			}

			cout << num_zeros << endl;

		}

	}

}
