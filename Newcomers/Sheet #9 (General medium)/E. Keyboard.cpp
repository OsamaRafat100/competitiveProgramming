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
    char ch;
    string s,a="qwertyuiop",b="asdfghjkl;",c="zxcvbnm,./";
    cin>>ch>>s;
    int x=1;
    if(ch=='R')x=-1;
    for(int i=0;i<sz(s);i++){
        if(a.find(s[i])!=string::npos){
            cout<<a[a.find(s[i])+x];
        }
        else  if(b.find(s[i])!=string::npos){
            cout<<b[b.find(s[i])+x];
        }
        else{
            cout<<c[c.find(s[i])+x];
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
