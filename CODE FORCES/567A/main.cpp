#include<bits/stdc++.h>
#define ll long long
#include <cstdio>
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
#define fast  ios::sync_with_stdio(0), cin.tie(0) , cout.tie(0);
typedef vector<int> vi;
typedef pair<int, int> pi;
//setw(10)
//cout << fixed << setpercision(# of digits after the fixed point



int main() {

    int n;
    cin >> n;
    vi v(n);
    fr(n) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {

        int mini, maxi;


        //for the first position
        if (i == 0) {
            mini = v[1] - v[0];
            maxi = v[n - 1] - v[0];
        }


        //for the last position
        else if (i == n - 1) {

            mini = v[n - 1] - v[n - 2];
            maxi = v[n - 1] - v[0];

        }


        //in between
        else {
            mini = min(v[i] - v[i - 1], v[i + 1] - v[i]);
            maxi = max(v[n - 1] - v[i], v[i] - v[0]);

        }

        cout << mini << " " << maxi << el;


    }



}







