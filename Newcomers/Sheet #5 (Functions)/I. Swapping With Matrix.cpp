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
int n,x,y;
int arr[505][505];
void swap_rows(){

    for(int i=1;i<=n;i++){
        swap(arr[x][i],arr[y][i]);
    }

}
void swap_columns(){

    for(int i=1;i<=n;i++){
        swap(arr[i][x],arr[i][y]);
    }

}

void solve()
{

  cin>>n>>x>>y;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)cin>>arr[i][j];
  }
  swap_rows();
  swap_columns();
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)cout<<arr[i][j]<<" ";
    cout<<endl;
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
