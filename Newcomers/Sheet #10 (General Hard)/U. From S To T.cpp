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
    string s, t, p;
    cin >> s >> t >> p;
    if (s == t)cout << "YES" << endl;
    else
    {
        bool ok = 1;
        ll c = 0;
        for(int i=0; i<sz(t); i++)
        {
            if (t[i] == s[c])
            {
                c++;
            }
        }

        if (c != sz(s))cout << "NO" << endl;
        else
        {
            s += p;
            sort(all(s));
            sort(all(t));
            ll c = 0;
            for(int i=0; i<sz(s); i++)
            {
                if (s[i] == t[c])c++;
            }
            if (c == sz(t))cout << "YES" << endl;
            else cout << "NO" << endl;
        }
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
