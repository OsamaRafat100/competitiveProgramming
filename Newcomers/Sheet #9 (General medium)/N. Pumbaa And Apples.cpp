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
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][m];
   for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)cin >> a[i][j];
    }
    ll r[n+5], c[m+5];
     for(int i=0; i<n; i++)r[i] = i;
    for(int i=0; i<m; i++)c[i] = i;
    while (k--) {
        int x, y;
        char ch;
        cin >> ch >> x >> y;
        x--; y--;
        if (ch == 'g')cout << a[r[x]][c[y]] << endl;
        if (ch == 'r') {
            swap(r[x], r[y]);
        }
        if (ch == 'c') {
            swap(c[x], c[y]);
        }
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
