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


int main() {

    int t;
    cin >> t;
    while (t--) {
        string s, T;
        cin >> s;
        cin >> T;
        sort(all(s));
        vi cnt(26, 0);
        for(auto x: s)
            cnt[x - 'a']++;


        //if T != "abc" and T is not a subsequence of the sort form of a
        if (T != "abc" || !cnt[0] || !cnt[1] || !cnt[2]) {
            cout << s << el;
        }


        //if T = "abc" and it a subsequence of the sort form of s
        //put all the occurrences of a then b then c then the remaining
        else {

            while (cnt[0]--)cout << "a";
            while (cnt[2]--)cout << "c";
            while (cnt[1]--)cout << "b";
            for (int i = 3; i < 26; ++i) {
                while (cnt[i]--)cout << char('a' + i);
            }
            cout << el;
        }

    }


}



