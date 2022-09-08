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
void shift_zeros(int arr[],int n){
    int zeros=0;
    for(int i=0;i<n;i++){
        if(arr[i])cout<<arr[i]<<" ";
        else zeros++;
    }
    for(int i=0;i<zeros;i++)cout<<"0 ";

}


void solve()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  shift_zeros(arr,n);
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
