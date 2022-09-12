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
     int a=0, b=0, c=0;
    string s;
    for (int i = 1; i <= 3; i++) {
        cin >> s;
        if (s[1]=='>') {
            if (s[0] == 'A') {
                a++;
            }
            else if (s[0] == 'B') {
                b++;
            }
            else {
                c++;
            }
        }
        else {
            if (s[2] == 'A') {
                a++;
            }
            else if (s[2] == 'B') {
                b++;
            }
            else {
                c++;
            }
        }
    }
    //-------------------------------------------------------
    if (a==b||a==c||b==c) {
        cout << "Impossible";
    }
    else {
        for (int i = 0; i <= 2; i++) {
            if (i == a) {
                cout << "A";
            }
            else if (i == b) {
                cout << "B";
            }
            else {
                cout << "C";
            }
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
