/*********************************************************
       "ولولا الأمل في بكرة إني ممكن اوصلك مكنتش اقدر اكمل"
***********************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
void OSAMA() { ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); }
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
#define watch(x) cout << (#x) << " = " << x << endl
#define PI 3.14159265
ll gcd(ll x, ll y)
{
  return (!y) ? x : gcd(y, x % y);
}
ll lcm(ll x, ll y) { return ((x / gcd(x, y)) * y); }
const int N = 2e5 + 5;
//===========================================================

void solve()
{
  int n;
  string s;
  cin>>n>>s;
  int ans=0;
  for(int i=0;i<sz(s);i++){
    if(s[i]=='V')ans+=5;
    else if(s[i]=='W')ans+=2;
    else if(i+1!=sz(s)){
        if(s[i]=='X')i++;
        else if(s[i]=='Y'){
            s+=s[i+1];
            i++;
        }
        else{
            if(s[i+1]=='V'){
                ans/=5;
                i++;
            }
            else if(s[i+1]=='W'){
                ans/=2;
                i++;
            }
        }
    }
  }
  cout<<ans;
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
