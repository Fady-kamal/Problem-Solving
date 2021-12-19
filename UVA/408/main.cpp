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
const int N = 3e5 + 5;
bool cmp(int a, int b) {

    return a > b;
}


int main(){

    int idx = 0, mod, step;
    while(cin >> step >> mod){

            bool chosen[mod] = {0};
            bool bad = false;

            fr(mod){

                int gen = (idx + step)% mod;

                //if it chosen
                if(chosen[gen] == true){

                    bad = true;
                    break;
                }

                chosen[gen] = true;
                idx = gen;



    }
    cout << setw(10) << step << setw(10) << mod <<"    ";
    if(bad == false)
        cout <<"Good Choice" << el << el;
    else
        cout <<"Bad Choice" << el << el;
    }






}
