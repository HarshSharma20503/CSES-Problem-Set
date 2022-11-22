#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pub push_back
#define pob pop_back
#define pof pop_front
#define puf push_front
#define mp make_pair
#define vi vector<ll>
#define vp vector<pair<ll,ll>>
#define vii vector<vi>
#define vd vector<ld>
#define maxint 2147483647
#define minint -2147483648
#define endl '\n'
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
#define read(x) rep(i, 0, x.size()) cin >> x[i]
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define p(x) cout << x << endl
#define p2(arr) rep(i, 0, arr.size()) cout << arr[i] << " "; cout << endl
#define pyn(x) if(x) py; else pn
#define pvp(x) p(sz(x)); rep(i, 0, x.size()) cout << x[i].first << " " << x[i].second << endl
#define coe(x) ll odd = 0, even = 0; rep(i, 0, x.size()) if(x[i] % 2 == 0) even++; else odd++
#define c01(x) ll zero = 0, one = 0; rep(i, 0, x.size()) if(x[i] == 0) zero++; else one++
 
void solve()
{
    ll n;
    cin>>n;
    vi v;
    for(int i=1;i<=n;i++)
        v.push_back(i);
    while(v.size()>1)
    {
        vi x;
        for(int i=0;i<v.size();i++)
        {
            if(i%2==1)cout<<v[i]<<" ";
            else
                x.push_back(v[i]);
        }
        if(v.size()%2==0)
        v=x;
        else
        {
            v.clear();
            v.push_back(x[x.size()-1]);
            for(int i=0;i<x.size()-1;i++)
                v.push_back(x[i]);
        }
    }
    cout<<v[0];
}
 
int main()
{
    int t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}
