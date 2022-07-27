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
ll gcd(ll x, ll y)
{
  return (!y) ? x : gcd(y, x % y);
}
ll lcm(ll x, ll y) { return ((x / gcd(x, y)) * y); }
const int N = 2e5 + 5;
//===========================================================

void solve()
{
  int n, x = 1;
  cin >> n;
  for (int i = 1; i <= n;i++){
    for (int j = 1; j <= n - i;j++){
      cout << ' ';
    }
    for (int j = 1; j <= x;j++){
      cout << "*";
    }
    x += 2;
    cout << '\n';
  }
  x -= 2;
  for (int i = n; i >= 1;i--){
    for (int j = 1; j <= n - i; j++)
    {
      cout << ' ';
    }
    for (int j = 1; j <= x; j++)
    {
      cout << "*";
    }
    x -= 2;
    cout << '\n';
  }
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
int main()
{
  //File();
  OSAMA();
  int t = 1;
  //cin >> t;
  while (t--)
  {

    solve();
  }
}
