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
  double x1, x2, x3, x4, y1, y2, y3, y4,r1,r2,r3,r4, x,y;
    cin >> x1 >> y1>> x2  >> y2>> x3 >> y3>> x4   >> y4;
    r1 = (x1 + x2) / 2;
    r2 = (y1 + y2) / 2;
    r3 = (x3 + x4) / 2;
    r4 = (y3 + y4) / 2;
    x = (sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2)) / 2) + (sqrt(pow(y4 - y3, 2) + pow(x4 - x3, 2)) / 2);
    y = sqrt(pow(r4 - r2, 2) + pow(r3 - r1, 2));

    if (x >= y)
        cout << "YES";
    else
        cout << "NO";
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
