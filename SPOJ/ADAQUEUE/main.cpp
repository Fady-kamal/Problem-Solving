#include<bits/stdc++.h>
using ll = long long;
using namespace std;
#define el '\n'


/*
we use flag to reverse instead of reverse() in order not to exceed the time complexity 
*/
 
int main()
{
    bool flag = true; //default direction 
    int Q; 
    cin >> Q;
    deque<int> dq;
    int n;
    while (Q--) {

        string s;
        cin >> s;
        if (flag)
        {
            //case one
            if (s == "back") {

                if (dq.empty())
                    cout << "No job for Ada?" << el;

                else {
                    cout << dq.back() << el;
                    dq.pop_back();
                }

            }

            //case two 
            else if (s == "front") {
                if (dq.empty())
                    cout << "No job for Ada?" << el;
                else {
                    cout << dq.front() << el;
                    dq.pop_front();
                }
            }


            //case three
            else if (s == "push_back") {
                cin >> n;
                dq.push_back(n);
            }

            //case four
            else if (s == "toFront") {
                cin >> n;
                dq.push_front(n);
            }

            else if (s == "reverse") {
                flag  = !flag;
            }

        }







        else
        {
            //case one
            if (s == "back") {

                if (dq.empty())
                    cout << "No job for Ada?" << el;

                else {
                    cout << dq.front() << el;
                    dq.pop_front();
                }

            }

            //case two 
            else if (s == "front") {
                if (dq.empty())
                    cout << "No job for Ada?" << el;
                else {
                    cout << dq.back() << el;
                    dq.pop_back();
                }
            }


            //case three
            else if (s == "push_back") {
                cin >> n;
                dq.push_front(n);
            }

            //case four
            else if (s == "toFront") {
                cin >> n;
                dq.push_back(n);
            }

            else if (s == "reverse") {
                flag  =  !flag;
            }



        }



    }
 
}