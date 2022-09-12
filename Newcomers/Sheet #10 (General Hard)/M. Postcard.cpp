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
    string s;
    int k;
    cin >> s >> k;
    int c = 0;
    for(int i=0; i<sz(s); i++)
    {
        if (s[i] >= 'a' &&s[i] <= 'z')c++;
    }
    if (c == k)
    {
        for(int i=0; i<sz(s); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')cout << s[i];
        }
    }
    else
    {
        string ss;
        for(int i=0; i<sz(s); i++)
        {

            if (s[i] != '?' && s[i] != '*')
            {
                if (i == sz(s) - 1)ss.push_back(s[i]);
                else if (s[i + 1] == '?')
                {
                    if (c <= k)ss.push_back(s[i]);
                    else c--;
                }
                else if (s[i + 1] == '*')
                {
                    if (c == k)ss.push_back(s[i]);
                    else  if (c > k)
                    {
                        c--;
                    }
                    else
                    {
                        ss.push_back(s[i]);
                        while (c != k)
                        {
                            ss.push_back(s[i]);
                            c++;
                        }
                    }

                }
                else ss.push_back(s[i]);
            }
            if (c == k)
            {
                cout << ss;
                for(int j=i+1; j<sz(s); j++)
                {
                    if (s[j] >= 'a' && s[j] <= 'z')
                    {
                        cout << s[j];
                    }
                }

                return;
            }

        }

        cout << "Impossible";

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
