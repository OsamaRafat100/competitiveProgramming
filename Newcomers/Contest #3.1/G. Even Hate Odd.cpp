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
    int n;
    cin >> n;
    int even = 0, odd = 0;
    for (size_t i = 0; i<n; i++)
    {
       int x;cin>>x;
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }
    if (n % 2 != 0)
        cout << -1 << endl;
    else
    {
        if (even > n / 2)
            cout << even - n / 2 << endl;
        else
            cout << odd - n / 2 << endl;
    }

}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
int main()
{
    //File();
    OSAMA();
    int t = 1;
     cin >> t;
    while (t--)
    {

        solve();
    }
}
