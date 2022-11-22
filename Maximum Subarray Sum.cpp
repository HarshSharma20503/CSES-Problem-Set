//kadane's algorithm
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
    ll n;cin>>n;
    vi v(n);
    read(v);
    ll sum=0;
    ll max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(max<sum)max=sum;
        if(sum<0)
        {
            sum=0;
        }
    }
    p(max);
}
 
int main()
{
    int t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}
