#include<bits/stdc++.h>

using ll = long long;
using namespace std;

int main(){
    
    int t;
    scanf("%d", &t);
    queue<ll> q;
    
    while(t--){
        
        ll x;
        scanf("%lld", &x);
        
        if (x == 1){
           scanf("%lld", &x);
           q.push(x);
            
        }
        
        else if (x == 2) {
            
            if(!q.empty()) q.pop();
            
        }
        
        else {
            
            if(q.empty()) printf("Empty!\n");
            else printf("%lld\n",q.front());
            
        }
        
        
    }
}
