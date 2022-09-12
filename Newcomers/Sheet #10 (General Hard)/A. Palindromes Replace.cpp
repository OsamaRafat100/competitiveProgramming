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
    string s;
    cin>>s;
    int n=sz(s);
    if(n%2&&s[n/2]=='?')s[n/2]='a';
    for(int i=0;i<n/2;i++){
        if(s[i]=='?'){
            if(s[n-i-1]=='?')s[i]=s[n-i-1]='a';
            else{
                s[i]=s[n-i-1];
            }
        }
        else{
            if(s[n-i-1]=='?'){
                s[n-i-1]=s[i];
            }
            else {
                if(s[i]!=s[n-i-1]){
                    cout<<-1;
                    return ;
                }
            }
        }
    }
    cout<<s;

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
