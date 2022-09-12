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
    int n, m ;
    cin >> n >> m;
    ll a[n+5][m+5];
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++)  {
            cin >> a[i][j];
        }
    }
    int l = 1, r = 1;
    while (l <= n && r <= m) {
        for (int i = l; i <= m; i++)
        {
            cout << a[l][i] << " ";
        }
        l++;
        for (int i = l; i <= n; i++)
        {
            cout << a[i][m] << " ";
        }
        m--;
        if (l <= n) {
            for (int i = m; i >= r; i--)
            {
                cout << a[n][i] << " ";
            }
            n--;
        }
        if (r <= m) {
            for (int i = n; i > r; i--)
            {
                cout << a[i][r]<<" ";
            }
            r++;
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
