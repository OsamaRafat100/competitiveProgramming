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
   ll n, x, y, x1, y1, a , b, c, d,area;

    cin >> n;
    cin >> x >> y >> x1 >> y1;
    n--;
    while (n--)
    {

        cin >> a >> b >> c >> d;
        x = max(x, a);
        y = max(y, b);
        x1 = min(x1, c);
        y1 = min(y1, d);
    }

    if (x1>x&& y1>y)area = (x1 -x) * (y1 - y);
    else area = 0;
    cout <<  area<< endl;


}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
int main()
{
  //File();
  OSAMA();
  int t = 1;
  cin >> t;
  for(int i=1;i<=t;i++){
    cout << "Case #" <<i << ": ";
    solve();
  }
}
