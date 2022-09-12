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
    string s,l,r;
    cin>>s;
    bool left=1;
    for(int i=0; i<sz(s); i++)
    {
        if(s[i]=='|')left=0;
        else if(left)l+=s[i];
        else r+=s[i];
    }
    cin>>s;
    int size=sz(s)+sz(l)+sz(r);
    if(size%2!=0||(abs(sz(l)-sz(r))>sz(s))) cout<<"Impossible";
    else
    {
        int idx=0;
        while(sz(l)<size/2&&idx<sz(s))
        {
            l+=s[idx];
            idx++;
        }

        while(sz(r)<size/2&&idx<sz(s))
        {
            r+=s[idx];
            idx++;
        }
        cout<<l<<"|"<<r;
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
