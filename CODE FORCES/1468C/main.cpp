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

    int q;
    cin >> q;
    int customer_idx = 0;
    set <pair<int, int>> mon, pol;
    queue<int> result;


    while (q--)
    {

        int type;
        cin >> type;


        if (type == 1)
        {
            ++customer_idx; //there is a custome enters the place
            int m;
            cin >> m;
            mon.insert(make_pair(customer_idx, -m));
            pol.insert(make_pair(-m, customer_idx));
        }

        else if (type == 2)
        {
            //monocarp
            result.push(mon.begin()->first);
             

            //we pass pair as we can have same m for different indexes
            pol.erase(pol.find(make_pair(mon.begin()->second, mon.begin()->first)));

            //Remove the first pair
            mon.erase(mon.begin());



        }

        else //type = 3
        {

            //ploycarp
            result.push(pol.begin()->second);
     


            ////we pass pair as we can have same m for different indexes
            mon.erase(mon.find(make_pair(pol.begin()->second, pol.begin()->first)));

            //Remove the first pair 
            pol.erase(pol.begin());



        }

    }


    while (!result.empty()) {

        cout << result.front() << " ";
        result.pop();
    }

}