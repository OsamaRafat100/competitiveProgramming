/*********************************************************
       "ولولا الأمل في بكرة إني ممكن اوصلك مكنتش اقدر اكمل"
***********************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
void OSAMA() { ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); }
void File(){
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
    char arr[n][m],evil[11];

    for(int i=0;i<n;i++){
        bool ok=1;
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='S')evil[j]=1,ok=0;
        }
       if(ok){
            for(int j=0;j<m;j++){
                arr[i][j]='1';
            }
       }
    }

    int ans=0;
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(evil[j]==0)arr[i][j]='1';
            if(arr[i][j]=='1')ans++;
        }
    }
    cout<<ans;
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
