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
    ll n,s,sum;
    cin >> n >> s;
    vector<ll>v;
    sum = n * (n + 1)*1LL / 2;
    if (sum < s)
        cout << "-1" << endl;
    else
    {
        for (int i = n; i >= 1; i--)
        {
            if (s <= i)
            {
                v.push_back(s);
                break;
            }
            else
            {
                s = s - i;
                v.push_back(i);
            }
        }
        cout << v.size() << " ";
        for(int i=0; i<v.size(); i++)
        {
            cout << v[i] ;
            if(i+1<v.size())
            {
                cout << " ";
            }
        }
        cout << endl;

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
