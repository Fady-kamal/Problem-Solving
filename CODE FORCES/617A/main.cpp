#include<iostream>

using namespace std;

int main() {

	int x, steps;
	cin >> x;

	steps = x <= 5 ? 1 : (x / 5 + (x % 5 > 0));

	cout << steps;
	return 0;
}