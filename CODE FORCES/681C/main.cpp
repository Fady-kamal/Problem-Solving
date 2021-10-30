#include<bits/stdc++.h>
#include<regex>
#include <unordered_map>
using ll = long long;
using namespace std;
#define el '\n'
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1; i<=n ;i++)
#define fr1l(n) for(int i=1; i< n ;i++)

priority_queue <int, vector<int>, greater<int>> pq; 
vector<string> result;
int n,x;
string query;

int main() {
    
    cin >> n;

    while (n--) {


        cin >> query;


        if (query == "insert")
        {
            cin >> x;
            pq.push(x);
            result.push_back(query + " "  + to_string(x));
        }

        else if (query == "removeMin")
        {
            if (pq.empty()) {
                pq.push(1);
                result.push_back("insert 1");
            }

            pq.pop();
            result.push_back(query);
              
        }

        else { //get min

            cin >> x;


            //compare the x with the inserted not removed elements in pq (if exist)
            //remove those elements which less than x
            //and add these operations("Quiers") to the result vector
            while (!pq.empty() && x > pq.top())
            {
                pq.pop();
                result.push_back("removeMin");

            }


            //After removing all the inserted not removed elements less than x in pq
            //if the priority queue is empty or if the there is element greater than x 
            //at the top of the pq
            //that mean that the query("insert x") not exist ---> add it 
            if (pq.empty() || pq.top() > x)
            {
                pq.push(x);
                result.push_back("insert " + to_string(x));
            }


            result.push_back(query + " " +  to_string(x));

        }






    }


    cout << result.size() << el;
    for (auto str : result)
        cout << str << el;
}