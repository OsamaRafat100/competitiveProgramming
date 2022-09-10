/*********************************************************
       "ولولا الأمل في بكرة إني ممكن اوصلك مكنتش اقدر اكمل"
***********************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
void OSAMA() { ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); }
void File(){
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
ll ncr(ll n,ll r){
    ll a=1,b=1;
    for(int i=r+1;i<=n;i++){
        a*=i;
    }
    for(int i=1;i<=n-r;i++){
        b*=i;
    }
    return a/b;
}
ll npr(ll n,ll r){
    ll ans=1;
    for(int i=n-r+1;i<=n;i++){
        ans*=i;
    }

    return ans;
}
void solve()
{
  ll a,b;
  cin>>a>>b;
  cout<<ncr(a,b)<<" "<<npr(a,b);
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
