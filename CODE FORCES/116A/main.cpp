#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int A[1000];
int B[1000];
int inside[1000];

void populate(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

}

void display(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}



int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> A[i];
		cin >> B[i];
	}

	int sum(0);

	for (int i = 0; i < n; i++) {
		sum += (B[i] - A[i]);

		inside[i] = sum;
	}

	cout << *max_element(inside, inside + n);
}