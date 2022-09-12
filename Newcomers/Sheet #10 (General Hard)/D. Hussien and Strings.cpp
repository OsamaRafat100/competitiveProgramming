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
    string s, ss;
    cin >> s >> ss;
    string a, b;
    int frq[200]={0};
    for(int i=0; i<sz(s); i++){
        frq[s[i]]++;
        if (s[i] != ss[i]) {
            a+=s[i];
            b+=ss[i];
        }
        if (sz(b) > 2) {
            cout << "NO";
            return ;
        }
    }
    if (sz(s) == 2) {
        reverse(all(s));
        if (s==ss)cout << "YES";
        else cout << "NO";
    }
    else  if (sz(b) == 2) {
        reverse(all(a));
        if (a==b)cout << "YES";
        else cout << "NO";

    }
    else if (sz(b) == 0) {
        bool ok = 0;
        for (size_t i = 'a'; i < 'z'; i++)
        {
            if (frq[i] >= 2) {
                ok = 1; break;
            }
        }
        if (ok == 1) cout << "YES";

        else cout << "NO";
    }
    else cout << "NO";

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
