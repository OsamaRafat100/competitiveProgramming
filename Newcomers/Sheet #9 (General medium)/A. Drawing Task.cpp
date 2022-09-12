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
    int n,m,q;
    cin>>n>>m>>q;
    char arr[n+1][m+1];
    memset(arr,'.',sizeof(arr));
    while(q--)
    {
        int r1,r2,c1,c2;
        char ch;
        cin>>r1>>c1>>r2>>c2>>ch;
        if(r1>r2)swap(r1,r2);
        if(c1>c2)swap(c1,c2);
        for(int i=r1; i<=r2; i++)
        {
            for(int j=c1; j<=c2; j++)
            {
                arr[i][j]=ch;
            }
        }

    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout<<arr[i][j];
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
