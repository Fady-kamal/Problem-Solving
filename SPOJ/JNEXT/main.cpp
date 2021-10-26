#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void swap(int* a, int* b) {



	/*
	* swap the actual values not the copy of them 
	* 
	*/
	int temp = *a;

	*a = *b;
	*b = temp;

}


void findNext(int number[], int n) {


	/*
	* 
	*
	*/

	int i, j;


	//find the first number from the right which is greater than the previous of it 
	for (i = n - 1; i > 0; i--) {

		if (number[i] > number[i - 1])
			break;
	}


	//if all digits in descending order, print -1
	if (i == 0) {

		cout << -1;
		return;

	}



	//find the smallest digit after (x= number[i - 1]) which is greater than it 
	//asume that the index of the such smallest number is i 
	int x = number[i - 1], smallest = i;
	for (int j = i + 1; j < n; j++) {

		if (number[j] > x && number[j] < number[smallest])
			smallest = j;

	}


	//after you find that element, swap x = number[i - 1] with it 
	swap(&number[smallest], &number[i - 1]);


	//sort the digits after x (number[i -1]) in descending order 
	sort(number + i, number + n);


	for (int i = 0; i < n; i++) {
		cout << number[i];
	}

}


const int N = 1000000 + 10;


int main() {

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		int arr[N];

		//populate the array 
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		findNext(arr, n);
		cout << endl;
	}
}


