#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin >> n;
	vector <int> v(n), ans(n);
	for(int &x : v)
		cin >> x;
	sort(v.begin(), v.end());
	int cnt = (n - 1) / 2;
	ans[0] = v[n-1];
	for(int i=1, j = cnt - 1, k = n-2; i<n; i+=2, j--, k--){
		if(j == -1){
			ans[i] = v[k];
			break;
		}
		ans[i] = v[j];
		ans[i+1] = v[k];
		if(ans[i] == ans[i+1])
			cnt--;
	}
	cout << cnt << endl;
	for(int x : ans)
		cout << x << " ";
	return 0;
}