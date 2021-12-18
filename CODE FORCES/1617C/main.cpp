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
//cout << fixed << setpercision(# of digits after the fixed point
const int N = 3e5 + 5;
bool cmp(int a, int b) {

    return a > b;
}

bool isSubSequence(string str1, string str2)
{
    int m = str1.size();
    int n = str2.size();
    int j = 0; // For index of str1 (or subsequence

    // Traverse str2 and str1, and
    // compare current character
    // of str2 with first unmatched char
    // of str1, if matched
    // then move ahead in str1
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;

    // If all characters of str1 were found in str2
    return (j == m);
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}


int main() {

    int t;
    cin >> t;
    while (t--) 
    {

        int n;
        cin >> n;

        set<int> st; //contains the number from 1 to n in sorted form 
        fr1(n) { st.insert(i); }

        vi rem;


        //if i is already present do not do anything 
        fr(n) {
            int v;
            cin >> v;
            if (st.find(v) != st.end()) { st.erase(v); }
            else { rem.push_back(v); }
        }

        //sort rem
        sort(all(rem), cmp);

     
        bool err = false;

        for (auto& x : rem) {
            auto it = st.end();
            --it;
            int it_val = *it;
            if (it_val > (x - 1) / 2) { err = true; break;}
            st.erase(it);
        }

        if (err) {
            cout << -1 << el;
        }
        else {
            cout << rem.size() << el;
        }





    }

 
}



