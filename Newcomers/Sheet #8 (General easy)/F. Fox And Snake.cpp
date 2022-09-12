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
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    memset(arr,'.',sizeof(arr));
    bool ok=1;
    for(int i=0; i<n; i++)
    {
        if(i%2)
        {
            if(ok)
            {
                arr[i][m-1]='#';
                ok=!ok;
            }
            else {
                arr[i][0]='#';
                ok=!ok;
            }
        }
        else
        {
            for(int j=0; j<m; j++)
                arr[i][j]='#';
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)cout<<arr[i][j];
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
