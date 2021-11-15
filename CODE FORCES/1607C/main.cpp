

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




int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;
        vector<int> v(n);
        fr(n) {
            cin >> v[i];
        }

        vector<int> chosen;
        //sort the array 
        sort(all(v));

        int maxi = v[0];

        for (int i = 0; i < v.size() - 1; i++)
        {
            maxi = max(maxi, v[i + 1] - v[i]);
        }


        cout << maxi << el;
    }



}








