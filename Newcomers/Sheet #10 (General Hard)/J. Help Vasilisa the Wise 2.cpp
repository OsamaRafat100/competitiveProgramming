/*********************************************************
       "ولولا الأمل في بكرة إني ممكن اوصلك مكنتش اقدر اكمل"
***********************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
void OSAMA()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
}
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
//===========================================================
//**************** THINK TWICE .. CODE ONCE ******************//


void solve()
{
    int r1, r2, c1, c2, d1, d2;
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
  for (int i = 1; i < 10;i++){
    for (int j = 1; j < 10;j++){
      if(i==j)continue;
      for (int x = 1; x < 10;x++){
        if(i==x||j==x)continue;
        for (int y = 1; y < 10;y++){
          if(i==y||j==y||x==y)continue;
          if(i+j==r1&&x+y==r2&&i+x==c1&&j+y==c2&&i+y==d1&&j+x==d2){

            cout << i << " " << j << '\n'
                 << x << " " << y;
            return;
          }
        }
      }
    }
  }
  cout << -1;

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
