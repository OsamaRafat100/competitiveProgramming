/*********************************************************
       "ولولا الأمل في بكرة إني ممكن اوصلك مكنتش اقدر اكمل"
***********************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
void OSAMA()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
}
void File()
{
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
#endif
}
#define ll long long
#define all(v) (v).begin(), (v).end()
#define sz(n) int(n.size())
#define endl '\n'
//===========================================================
//**************** THINK TWICE .. CODE ONCE ******************//


void solve()
{
    int n;
    cin >> n;
    vector<pair<ll,ll>> v;
    for(int i=0; i<n; i++) {
        ll a,b;
        cin>>a>>b;
       v.push_back({a-b,a});
    }
   sort(all(v));
   reverse(all(v));
   ll sum=0;
   sum=v[0].second;


   for(int i=1; i<n; i++) {

        if(v[i-1].first<v[i].second)sum+=v[i].second-v[i-1].first;
        else {ll x=abs(v[i-1].first-v[i].second);v[i].first+=x;}
    }
    cout<<sum;


}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
int main()
{
    //File();
    OSAMA();
    int t = 1;
    // cin >> t;
    while (t--)
    {

        solve();
    }
}
