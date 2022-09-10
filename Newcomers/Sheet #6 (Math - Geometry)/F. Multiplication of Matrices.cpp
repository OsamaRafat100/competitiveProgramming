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
    int ra,ca;
    cin>>ra>>ca;
    int a[ra][ca];
    for(int i=0; i<ra; i++)
    {
        for(int j=0; j<ca; j++)
        {
            cin>>a[i][j];
        }
    }
    int rb,cb;
    cin>>rb>>cb;
    int b[rb][cb];
    for(int i=0; i<rb; i++)
    {
        for(int j=0; j<cb; j++)
        {
            cin>>b[i][j];
        }
    }
    int arr[ra][cb];
    for(int i=0; i<ra; i++)
    {
        for(int j=0; j<cb; j++)
        {
            ll sum=0;
            for(int k=0; k<rb; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            cout<<sum<<" ";

        }
        cout<<endl;
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
