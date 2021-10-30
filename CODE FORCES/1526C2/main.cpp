#include<bits/stdc++.h>
#include<regex>
#include <unordered_map>
using ll = long long;
using namespace std;
#define el '\n'
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1; i<=n ;i++)
#define fr1l(n) for(int i=1; i< n ;i++)


string lower_case(string word) {

    for (int i = 0; i < word.length(); i++) {
        word[i] = tolower(word[i]);
    }

    return word;

}








int main() {


    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> filter;
    priority_queue<int> pq;

    ll sum(0);
    int idx = 0;
    int cnt(0);

    fr(n)
    {
        cin >> a[i];

    }

    fr(n)
    {
        if (a[i] >= 0) {
            idx = i; //the index of the first non-negative value
            break;
        }
    }

    for (int i = idx; i < n; i++) 
    {
        filter.push_back(a[i]);
    }


    for (int i = 0; i < filter.size(); i++)
    {
        sum += filter[i];

        if (filter[i] >= 0)
            cnt++;

        else 
            // minus to put the biggest negative value scanned 
            //at the top
            pq.push(- filter[i]);

        //if the sum is negative, 
        //remove the biggest negative values that make the sum negative 
        while (!pq.empty() && sum < 0)
        {
            sum += pq.top();
            pq.pop();

        }

    }


    //the result = the numbre of  positive values + the number of the negative values 
    //that don't make the sum negative
    cout << cnt + pq.size();
}