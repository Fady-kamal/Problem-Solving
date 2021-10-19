#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
        if (s < 0)
            s = 0;
    }

    cout << s << endl;
}

int main()
{

    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        solve();
    }
}