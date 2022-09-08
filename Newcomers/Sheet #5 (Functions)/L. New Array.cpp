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
//**************** THINK TWICE .. CODE ONCE ******************//
void print_new_array(int a[],int b[],int n){
     for(int i=0;i<n;i++)cout<<b[i]<<" ";
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}


void solve()
{
  int n;
  cin>>n;
  int a[n],b[n];
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<n;i++)cin>>b[i];
  print_new_array(a,b,n);
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
