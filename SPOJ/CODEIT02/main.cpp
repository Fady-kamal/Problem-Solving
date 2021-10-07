#include <bits/stdc++.h>
using namespace std;
const int SIZE = 25;
vector<int> a(SIZE);
int n, k;


int solve(int pos, int rem, int prevXor) {

	/*
	* 
	* Input Arguments:
	*  #pos: represent the index 
	*  #rem: the elements which have not been chosen yet
	*  #preXor: the latest xor value we have 
	* 
	* 
	* Outputs:  the maximum XOR value of the chosen K elements.
	*/

	//if we at the end of the array 
	//we have two case 
	if (pos == n) {

		//case one : we have chosen k elements somehow
		// it doesn't necessarily mean that we choose the 
		// best k elements that give me the max xor 
		// it means that we just choose k elements and get the k
		if (rem == 0)
			return prevXor;


		//case two: we reached the end of the array and 
		//don't choose the k elements 
		// at this case we return 0 (or any small value) such that
		// it loses if we compare it with any choosen k elements in max function 
		// in other words 
		// we can return any value that when we compare it 
		// between max( (solve(n,n,..) ----> 0 , solve(2,0,..)) = solve(2,0,..))
		else
			return 0;	
	}

	//we could take all the k elements before we reach the end of the array
	//ex: take the first 3 elements in array of length 5
	// at this case, we return the latest xor get from these k elements 
	if (rem == 0)
		return prevXor;


	//if we are  not at any of these two cases (rem == 0 or pos == n) 
	//we sure be at a position where we need to either 
	//1-choose the current element at that position and move to the second element
	//2- or ignore that element and move directly to the second element 
	//how to choose between them ?
	//we can choose between them by take the maximum between choosing it or ignoring it 
	int choose = max(solve(pos + 1, rem, prevXor), solve(pos + 1, rem - 1, prevXor ^ a[pos]));
	return choose;
}

int main() {

	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		cout << solve(0, k, 0) << endl;
	}
}



