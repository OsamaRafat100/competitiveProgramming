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

    string s;
    cin >> s;
    int username, pwd, profile, role, key;

    username = s.find("username=") + size("username=") - 1;
    pwd = s.find("pwd=") + size("pwd=") - 1;
    profile = s.find("profile=") + size("profile=") - 1;
    role = s.find("role=") + size("role=") - 1;
    key = s.find("key=") + size("key=") - 1;
    cout << "username: " << s.substr(username, s.find("&pwd=") - username) << endl;
    cout << "pwd: " << s.substr(pwd, s.find("&profile=") - pwd) << endl;
    cout << "profile: " << s.substr(profile, s.find("&role=") - profile) << endl;
    cout << "role: " << s.substr(role, s.find("&key=") - role) << endl;
    cout << "key: " << s.substr(key, s.size()) << endl;
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
