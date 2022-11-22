#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int max=0;                   //stores max value till present index
    char prev=s[0];
    int count=1;                 //stores count of consecutive same element
    if(s.length()==1)
    {
        cout<<1;
        return;
    }
    for(int i=1;i<s.length();i++)
    {
        if(prev==s[i])
        {
            count++;
        }
        else
        {
            prev=s[i];
            count=1;
        }
        if(max<count)max=count;
    }
    cout<<max;
}
 
int main()
{
    int t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}
