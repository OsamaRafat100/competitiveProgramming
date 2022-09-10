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
void solve()
{
  ll t,x;

  cin>>t;
  if(t==1){
    string s;
    ll x,ans=0;
    cin>>s>>x;
    for(int i=sz(s)-1;i>=0;i--){
        if(isupper(s[i])){
            ans+=pow(x,sz(s)-i-1)*(s[i]-'A'+10);
        }
        else {
            ans+=pow(x,sz(s)-i-1)*(s[i]-'0');
        }
    }
    cout<<ans;
  }
  else{
    ll n,x;
    cin>>n>>x;
    string s;
    while(n){
        if(n%x>=10){
            s+='A'+(n%x-10);
        }
        else{
            s+='0'+(n%x);
        }
        n/=x;
    }
    reverse(all(s));
    cout<<s;

  }
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
