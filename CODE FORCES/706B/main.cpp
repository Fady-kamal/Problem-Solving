
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int m, mv;
    cin >> m;

    for (i = 0; i < m; i++)
    {
        cin >> mv;
        cout << upper_bound(a.begin(), a.end(), mv) - a.begin() << endl;
    }

}