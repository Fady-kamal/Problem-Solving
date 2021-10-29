#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string s,ss[111];
    while(n--)
    {
        s.clear();
        cin>>s;
        int len=s.size();
        s=s+s;
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<len;j++)
            {
                ss[i]+=s[i+j];
            }
        }
        sort(ss,ss+len);
        cout<<ss[0]<<endl;
        for(int i=0;i<len;i++)
            ss[i].clear();
    }
    return 0;
}