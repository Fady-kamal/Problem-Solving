#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void printVector(vector<int>& vec) {

	cout << '[';
	for (int i = 0; i < vec.size(); i++) {

		if (i > 0)
			cout << ", ";
		cout << vec[i];
	}

	cout << ']';

}


int main()
{

	int n, m;
	cin >> n >> m;
	vector<int> L(n);
	vector<int> R(n);
	vector<int> points(m);
		
	//populate the vector 
	for (int i = 0; i < n; i++) {
		cin >> L[i];
		cin >> R[i];
	}

	for(int i = 0; i < m ; i++) {
		points[i] = i + 1;
 	}


	int cnt(0);

	for (int i = 0; i < n; i++) {

		int start = L[i];
		int end = R[i];

		for (int i = 0; i < m; i++) {
 
			if (points[i] >= start && points[i] <=  end) {
				points[i] = 0;
				cnt++;
			}
		}

	}



	if (cnt == points.size())
		cout << 0;

	else {

		cout << points.size() - cnt << endl;
		for (int i = 0; i < m; i++) {

			if (points[i] != 0) {
				cout << points[i] << " ";
			}
		}
	}

 

}
