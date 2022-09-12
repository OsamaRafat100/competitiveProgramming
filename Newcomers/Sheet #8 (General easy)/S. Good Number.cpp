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
    int n,cnt=0;
    char k;
    string s;
    cin>>n>>k;
    while(n--){
        cin>>s;
        int frq[200]={0};
        for(int i=0;i<sz(s);i++)frq[s[i]]++;
        bool good=1;
        for(int i='0';i<=k;i++){
            if(frq[i]==0)good=0;
        }
        if(good)cnt++;
    }
    cout<<cnt;
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
