

#include<bits/stdc++.h>
#define ll long long
#define Pair pair<ll,ll>


using namespace std;
#define fr(n) for(int i=0;i<n;i++)
#define frj(n) for(int j=0;j<n;j++)
#define frk(n) for(int k=0;k<n;k++)
#define fr1(n) for(int i=1;i<=n;i++)
#define el '\n'
#define f first 
#define s second
#define all(x) (x).begin(), (x).end()
#define allrev(x) (x).rbegin(), (x).rend()
#define fast  ios::sync_with_stdio(0), cin.tie(0) , cout.tie(0)
//
//void printVector(vector<int>& vec) {
//
//    cout << '{';
//    for (int i = 0; i < vec.size(); i++) {
//
//        if (i > 0)
//            cout << ", ";
//        cout << vec[i];
//    }
//
//    cout << '}';
//
//}


bool comp(pair<int, int> x, pair<int, int > y) {
	if (x.first < y.first)
		return true;

	else if (x.first == y.first && x.second > y.second)
		return true;
	else
		return false;
}



int main() {

	int t;
	cin >> t;
	while (t--) {

		int n, m;
		cin >> n >> m;
		int num_persons = n * m;
		vector<pair<int, int>> a;
		fr(num_persons) {
			int x;
			cin >> x;
			a.push_back(make_pair(x, i));
		}

		sort(all(a), comp);
		/*
		   //for visualizing how the sorting done
		   //sorting done in descending order
		   //however if their persons of the same level of sight
		   //we put them in decreasing order corresponds to their order of coming
			for (auto p : a) {
				cout << p.first << " " << p.second << el;
			}*/

			//Inconvienience occurs when the person with the higher eye sight 
			//comes after the person(s) of the lower eye sight who 
			//sit in seat(s) before him 


		int inconv = 0;
		//Loop on every person 
		for (int i = 0; i < num_persons; i++) {


			//Loop on all the persons before person # i
			//check their order of coming 
			//if their order less than the order the person #i,
			//convienience occurs because of two reasons 
			//reason one: The persons with lower level of sight corresponds
			//to him will sit before him 
			//reason two: they will come before him so he will go through him 
			for (int j = 0; j < i; j++) {

				if (a[i].second > a[j].second)
					inconv++;
			}

		}


		cout << inconv << el;











	}

}








